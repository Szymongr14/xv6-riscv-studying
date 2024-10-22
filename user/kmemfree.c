#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    printf("Free kernel memory: %d\n", kmemfree());
    exit(0);
}