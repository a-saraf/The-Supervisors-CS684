Strategy Used & Assumptions made
1. We have used two regions in our statechart that execute in parallel: the first one being the PID calculator, and the second one performing state transitions. 
2. Every 100 ms, our PID calculator calculates the value of PIDforward, which starts by setting the previous values of the white line sensors to 0. 
3. Then it calculates the value of PIDforward using the reading of the middle sensor and applying a PD controller on the same, which is further normalised by 1024.
4. Further, a variable named PIDLeft is calculated, which takes the difference between the extreme right and left sensors and the difference between the inner right and left sensors and combines them together linearly, setting a higher weight for the outermost sensors so that the bot takes a sharper turn when the outermost sensors have a higher difference in readings.
5. Finally, the left and right motor velocities are set such that LeftVelocity = PIDforward - PIDleft and RightVelocity = PIDforward + PIDleft.
6. This ensures that we turn appropriately when the difference in readings is high. 
7. We have also added steps to ensure that LeftVelocity and RightVelocity values do not go outside the range of [0, 100].
8. When our bot has readings from all sensors lower than a threshold, our bot becomes stationary. 

Assumptions
1. The readings will change fast enough that on edges our bot will turn before it goies out of alignment with the track, so it never has to move backward. 
2. Values of kp, kd, and threshold can be tuned appropriately, so we have set some reasonable initial values for now. 
3. The motor will cap values greater than 100 and lower than 0. 

Inputs
LSO: readings from the sensor on extreme left
LS1: readings from the sensor on inner left
LS2: readings from the sensor in the middle
LS3: readings from the sensor on inner right
LS4: readings from the sensor on extreme right

Outputs:
Direction: Forward (1) or backward (0)
LeftVelocity: Velocity of left motor (between 0 to 100)
RightVelocity: Velocity of right motor (between 0 to 100)

YT Link: https://youtu.be/N4gPfvPG5iI