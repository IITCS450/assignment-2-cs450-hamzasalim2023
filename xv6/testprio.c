#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
    int pid = getpid();

    if(setpriority(pid, 0) == 0)
        printf(1, "Success: priority set\n");
    else
        printf(1, "Failure\n");

    if(setpriority(9999, 1) < 0)
        printf(1, "Correctly failed invalid PID\n");

    if(setpriority(pid, 5) < 0)
        printf(1, "Correctly failed invalid priority\n");

    exit();
}

