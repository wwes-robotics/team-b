# Dual Arm Motors
This program is to accommodate the dual-motor setup for the robot arms.
The original problem being solved is that with the 2x motors controlling the arms,
the default for the controller is that you wire up separate buttons to control each
of the motors.

Because the motors need to run at the exact same speeds at the exact same time to prevent
racking of the arms, we need to drive the arms with a single button for each direction.

## Motor and Sensor Setup
|Port|Name|Type|Reversed?|Drive Motor Side|
|----|----|----|---------|----------------|
|`motor1`|`leftMotor`|VEX IQ Motor|✅|Left|
|`motor4`|`leftArm`|VEX IQ Motor||None|
|`motor7`|`rightMotor`|VEX IQ Motor||Right|
|`motor10`|`rightArm`|VEX IQ Motor|✅|None|

It is important to note that for the "arms", do **NOT** set them up at all to control a motor side; set them up as "None".
When I didn't have this set, as soon as I introduced the `tankControl` the driving was jittery. I then realized that this was
because they were also being considered when driving.
