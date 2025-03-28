#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");

    //hot foods

    int right=0;
    int left=3; 
    int arm=0;
    int claw=3;
	
    //the CLAW can ONLY go up to 1007 do not go fats 1007 or it will break
    enable_servos();
    set_servo_position(arm,1090);//used to be 1450
    set_servo_position(claw,1007);
    msleep(1000);
    
    //go towards food
    cmpc(right);
    cmpc(left);
    while(gmpc(right)< 4450-15 &&gmpc(left)< 4450-15 )
    {
        motor(right,50-1);
        motor(left,50);
    }

    motor(right,0);
    motor(left,0);
    msleep(500);
    
    motor(right,0);
    motor(left,10);
    msleep(750);
    
    motor(right,-15);
    motor(left,-15);
    msleep(550);
    
    motor(right,20);
    motor(left,20);
    msleep(2000);
    
    
    //GRAB THE HOTDOG
    
    motor(right,0);
    motor(left,0);
    msleep(1000);
    set_servo_position(claw,338);
    msleep(500);
    
    motor(right,-100);
    motor(left,-100);
    msleep(1000);
    
        
    //go to the serving tray
    motor(right,50);
    motor(left,0);
    msleep(1000);
    
    motor(right,-100);
    motor(left,-100);
    msleep(1000);
    
     motor(right,-100);
    motor(left,100);
    msleep(1030);
    
    motor(right,100);
    motor(left,100);
    msleep(3000);
    
    
    while(gmpc(right)< 4090-15 &&gmpc(left)< 4090-15 )
    {
        motor(right,50-1);
        motor(left,50);
    }
    
    
    //go back and get the hamburgeer
     motor(right,0);
    motor(left,50);
    msleep(200);
    
    while(gmpc(right)< 4090-15 &&gmpc(left)< 4090-15 )
    {
        motor(right,50-1);
        motor(left,50);
    }
    
    return 0;
}
