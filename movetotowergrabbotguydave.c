#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    
    
    motor(0,100);
    motor(3,87);
    
    msleep(3500);
    
    motor(0,100);
    motor(3,0);
    
    msleep(800);
    
    motor(0,100);
    motor(3,87);
        
    msleep(1500);
    
    enable_servos();
    
    set_servo_position(0,1500);
    
    msleep(1000);
    
    
    
    
    return 0;
}
