#include "stdio.h"

long foo(long m, long n) {
    long z = 0;
    z = m + n;
    return z;
}
long main()
{
    long a = 10;
    long b = 20;
    long h = 0;
    h = foo(a, b);
    return 0;
}
