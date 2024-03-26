#include <kipr/wombat.h>

int main()
{
    printf("I see everything as well so I would be most greatful if you were to fear me\n");
    enable_servos();
    
    set_servo_position(2,100);
    set_servo_position(1,100);
    
    
    msleep(2000);
    return 0;
}
`