#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    msleep(10000);
    
    motor(0,100);
    motor(2,90);
    
    msleep(3000);
    
    ao();
    
    motor(0,100);
    motor(2,100);
    
    msleep(250);
    return 0;
}
