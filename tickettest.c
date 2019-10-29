#include "types.h"
#include "stat.h"
#include "pstat.h"
#include "user.h"
#include "fs.h"

int
main() {
    int ticketTest, i;
    ticketTest = 0;
    for(i = 1; i <= 5; i++) {
        ticketTest = fork();
        if(ticketTest == 0) {
            settickets(i * 10);
            printf(1,"%d forked child\n",getpid());
            exit();
        }
    }
    for(i = 1; i <= 5; i++) {
        wait();
    }
    return 0;
}