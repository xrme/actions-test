#include <stdlib.h>
#include <stdio.h>

#include "hello.h"

int
main(int argc, char *argv[])
{
    int n = helper();
    printf("the number is %d\n", n);
    exit(0);
}
