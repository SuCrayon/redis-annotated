#include <stdio.h>

#include "sds.h"
#include "zmalloc.h"

/**
 * 验证sds惰性空间释放策略
*/

int main(int argc, char const *argv[])
{
    sds s = sdsnew("XYXabcXYYX");
    printf("s: %s, s->len: %ld, s->free: %ld\n", s, sdslen(s), sdsavail(s));

    s = sdstrim(s, "XY");
    printf("s: %s, s->len: %ld, s->free: %ld\n", s, sdslen(s), sdsavail(s));

    return 0;
}
