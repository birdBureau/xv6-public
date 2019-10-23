#include "types.h"
#include "stat.h"
#include "pstat.h"
#include "user.h"
#include "fs.h"

int
main() {
    int ticketTest, i;
    for(i = 1; i <= 5; i++) {
        ticketTest = fork();
        if(ticketTest == 0) {
            settickets(i * 10);
        }
    }
    return 0;
}