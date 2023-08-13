Inputs:
ns0 : Readings from the sensor on the extreme left (range -50 to 50)
ns1 : Readings from the sensor on the inner left (range -50 to 50)
ns2 : Readings from the sensor in the middle (range -50 to 50)
ns3 : Readings from the sensor on the inner right (range -50 to 50)
ns4 : Readings from the sensor on the extreme right (range -50 to 50)
nir0 : Readings from the left IR proximity sensor (range -50 to 50)
nir1 : Readings from the centre IR proximity sensor (range -50 to 50)
nir2 : REadings from the right IR proximity sensor (range -50 to 50)

Outputs: 
v_let : Velocity of the left motor
v_right : Velocity of the right motor
direction : The direction the bot is currently heading in. 

Strategy:
1. Since the values of the inputs are in between -50 to 50, these are first mapped to 0-1024, which is the actual range of the sensor outputs.
2. Above a certain threshold (640) the line is considered to be black for the white line sensor and similarly for the IR proximity sensor 
   above the threshold it is considered to be close.
3. Here it is assumed that the bot can only be in two major states, i.e., the Line Following mode and the Obstacle Avoidance mode and thus
   these are the two major states of the automaton of the bot with an Initialization state. 
4. Now parallel, the PID values are calculated, there is a variable PID_forward, which calculates its value using the reading of the middle
   sensor value which is normalised such that it is between 0-100. 
5. Furthermore, there is another variable in the PID part, PID_left which calculates the difference between the left and the right white line
   sensors and this is again also normalised. Thus, the velocity of the left motor is defined by PID_forward - PID_left whereas the velocity 
   of the right motor is given by PID_forward + PID_left. 
6. The line follower mode uses these velocities to define the motor velocities. If the difference between the motor velocities is greater
   than a threshold (20) the bot is in the process of making a turn. There are different modes for the Forward, Left, Right and Backward modes
   accordingly. 
7. As soon as the centre IR proximity sensor is above the threshold the bot changes its state from the Line Following mode to the Obstacle
   Avoidance mode and here it first fully turns left till the centre sensor goes off and the right sensor goes on, then it proceeds to move 
   forward till the right sensor turns off and takes a right. Then it again follows the length and takes another right turn and follows the
   length again until it reaches the black line again. Here the state changes back to the Line Following mode as the Obstacle has been 
   avoided by travelling around it. 
8. The PID is only calculated in the Line Following mode and not in the Obstacle Avoidance mode as it is not needed. 

Assumptions:
1. The lines are continuous, and the sensor values will change fast enough such that the bot will turn before it goes out of alignment with
   the track. A Backward mode is added in the case it overshoots and here the bot simply moves back with full speed. 
2. The thresholds for the sensors can be set accordingly during experimentation and here have been set some reasonable values for easier
   testing and verification, same goes for the values of the kp and kd constants used in the PID algorithm. 
3. Setting the direction to Backward would flip to direction of rotation of both the motors and the values given to the motors will simply be
   its speed. 
4. The proximity thresholds are such that while traversing there will not be any collisions, also the obstacles are considered to be stationary.

Youtube Video Link:
https://www.youtube.com/watch?v=DeDxNYmWuMA