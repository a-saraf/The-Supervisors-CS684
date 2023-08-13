#define Clock     13
#define Address   12
#define DataOut   11
#define CS        10

int _numSensors = 5;
int aIR0, aIR1, aIR2;

#define NUM_SENSORS 5
int sensorValues[NUM_SENSORS];
#include "logic.h"
#include "logic.c"
#include "logic_types.h"

Logic__valet_out OUT;
Logic__valet_mem SELFMEM;

void motion_pin_config(void) //Configure Pins as Output
//Port C for motion control and Port D for Velocity Control must be defined Output
{
  DDRC |= 0x0F;
  PORTC &= 0xF0;
  DDRD |= ((1<<5) | (1<<6));
  PORTD |= ((1<<5) | (1<<6));
}

void forward(){
  PORTC &= 0xF0;
  PORTC |= 0x06;
}

void backward(){
  PORTC &= 0xF0;
  PORTC |= 0x09;
}

void timer1_init()
{
  //Set Register Values for starting Fast 8-bit PWM
  TCCR0A = 0xA3;
  TCCR0B = 0x03;
  TCNT0 = 0x00;
  OCR0A = 0x00;
  OCR0B = 0x00;
}

void velocity (unsigned char left_motor, unsigned char right_motor)
{
  OCR0A = (unsigned char)left_motor;
  OCR0B = (unsigned char)right_motor;
}

void setup()
{
  Serial.begin(115200);
  pinMode(Clock, OUTPUT);
  pinMode(Address, OUTPUT);
  pinMode(DataOut, INPUT);
  pinMode(CS, OUTPUT);  
  motion_pin_config();
  timer1_init();
  DDRB &= 0xFC;
  DDRC &= 0x0F;
  Logic__valet_reset(&SELFMEM);
}

void loop()
{
  char i,j;
  unsigned int channel = 0;
  unsigned int values[] = {0,0,0,0,0,0};

  for(j = 0;j < _numSensors + 1;j++)
  {
    digitalWrite(CS,LOW);
    for(i = 0;i < 10;i++)
    {
      //0 to 4 clock transfer channel address
      if((i < 4) && (j >> (3 - i) & 0x01))
      digitalWrite(Address,HIGH);
      else
      digitalWrite(Address,LOW);

      //0 to 10 clock receives the previous conversion result
      values[j] <<= 1;
      if(digitalRead(DataOut)) 
      values[j] |= 0x01;
      digitalWrite(Clock,HIGH);
      digitalWrite(Clock,LOW);
    }
    //sent 11 to 16 clock 
    for(i = 0;i < 6;i++)
    {
      digitalWrite(Clock,HIGH);
      digitalWrite(Clock,LOW);
    }
    digitalWrite(CS,HIGH);
  }

  for(i = 0;i < _numSensors;i++)
  {
    sensorValues[i] = values[i+1];
  }
  
  // Serial.println("Sensor Values");
  // Serial.print(sensorValues[0]);
  // Serial.print("\t");
  // Serial.print(sensorValues[1]);
  // Serial.print("\t");
  // Serial.print(sensorValues[2]); 
  // Serial.print("\t");
  // Serial.print(sensorValues[3]); 
  // Serial.print("\t");
  // Serial.print(sensorValues[4]); 
  // Serial.print("\n");

  aIR2 = PIND & 1 << 7; 
  aIR1 = PINB & 1 << 0;
  aIR0 = PINB & 1 << 1;
  
  if(aIR0) aIR0 = 0;
  else aIR0 = 1;
  if(aIR1) aIR1 = 0;
  else aIR1 = 1;
  if(aIR2) aIR2 = 0;
  else aIR2 = 1;
  Logic__valet_step(sensorValues[0], sensorValues[1], sensorValues[2], sensorValues[3], sensorValues[4], aIR0, aIR1, aIR2, &OUT, &SELFMEM);
  // Logic__valet_step(1024, 1024, 1024, 1024, 1024, &OUT, &SELFMEM);
  //Logic__valet_step(700, 700, 700, OUT, SELFMEM);
  if (OUT.direction == 1){
    forward();}
  else{
    backward();}
  Serial.println(OUT.side_vals);
  
  velocity(OUT.v_left*1.0, OUT.v_right*1.0);
  // Serial.print(OUT.v_left);
  // Serial.print("\t");
  // Serial.print(OUT.v_right);
  // Serial.print("\n");
}
