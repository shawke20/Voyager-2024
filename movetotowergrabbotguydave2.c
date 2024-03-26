#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    motor(0,87);
    motor(3,100);
    msleep(3000);
    motor(0,100);
    msleep(2000);
    return 0;
}
