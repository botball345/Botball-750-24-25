#include <kipr/wombat.h>

int main()
{
    enable_servos();
    set_servo_position(3,250);
    msleep(250);
    set_servo_position(0,100);
    msleep(250);
    motor(0,100);
    motor(1,100);
    motor(2,-100);
    motor(3,-100);
    msleep(3685);
    set_servo_position(0,1500);
    msleep(250);
    while(digital(1)==0)
    {
        motor(0,-100);
        motor(1,-100);
        motor(2,100);
        motor(3,100);
    }
    {
        motor(0,100);
        motor(1,100);
        motor(2,-100);
        motor(3,-100);
        msleep(1750);
        //turn to trays
        motor(0,-100);
        motor(1,100);
        motor(2,-100);
        motor(3,100);
        msleep(1750);
    }
    {
        motor(0,100);
        motor(1,100);
        motor(2,-100);
        motor(3,-100);
        msleep(4500);
        //turn to the front of tray 
        motor(0,-100);
        motor(1,100);
        motor(2,-100);
        motor(3,100);
        msleep(1550);
        //move forward
        while(digital(0)==0)
        {
            motor(0,100);
            motor(1,100);
            motor(2,-100);
            motor(3,-100);
        }

        //drop the hotdog in
        enable_servos();
        set_servo_position(3,0);
        msleep(500);
        set_servo_position(0,100);
        msleep(500);



    }
    return 0;
}
