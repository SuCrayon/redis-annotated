#include <stdio.h>

#include "sds.h"
#include "zmalloc.h"

int main(int argc, char const *argv[])
{
    sds s = sdsnew("Redis");
    printf("s: %s\n", s);

    s = sdscat(s, "Mongo");
    printf("s: %s\n", s);

    return 0;
}
