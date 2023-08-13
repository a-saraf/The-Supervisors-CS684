The Line Following code was implemented with one forward state and a backward state to account for overshooting. 
The kp, kd values were finetuned accordingly based on the running of the bot. 
The logic for the PID is that the center sensor is used to calculate the base velocity for both of the motors and then we are taking the difference between the leftmost and rightmost sensor, and between the slight left and slight right sensor.
These last two values are used to calculate the overshoot of the left side and this calculated velocity is subtracted for the left motor and add for the right motor from the base value. 
The backward state directly moves the bot back without using the PID values until the bot is back on the white track. 
ki was not added as this will not help in a instantaneous control system.
Finally everything was integrated using integrate.sh and the code was burned on the bot using Arduino Uno.

-To run integrate.sh just run it in the main folder it is kept in.

Link for the video:
https://youtu.be/kES3aFQQr6k 
If this does not open:
https://drive.google.com/file/d/1NX-6orl6Yycb3AU80oOO_OC2S8cVz7wx/view?usp=sharing 

Please note the in our submission, integrate.sh is not inside the Heptagon folder, but in the main folder. 