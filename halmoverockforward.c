#include <kipr/wombat.h>

int main()
{  create_connect();
create_drive_straight(500);
 msleep(1050);
 stop();
 create_spin_block(500,180);
 create_drive_straight(-500);
 msleep(1050);
 create_disconnect();
    return 0;
}
