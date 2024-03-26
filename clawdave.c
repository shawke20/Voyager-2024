#include <kipr/wombat.h>

int main()
{
    enable_servos();
    
    set_servo_position(0,1500);
    
    msleep(1000);
    
    return 0;
}
