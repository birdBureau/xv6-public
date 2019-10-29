#include "types.h"
#include "stat.h"
#include "pstat.h"
#include "user.h"
#include "fs.h"

int
main() {
    struct pstat pinfo;

    getpinfo(&pinfo);
    
    int i;

    for(i = 0; i < NPROC; i++){
        if(!pinfo.inuse[i] && pinfo.tickets[i] != 0){
            printf(1, "IN USE: %d PID: %d TICKETS: %d TICKS: %d \n", pinfo.inuse[i], pinfo.pid[i], pinfo.tickets[i], pinfo.ticks[i]);
        }
    }

    return 0;
}