#include "stdio.h"

long foo(long m, long n, long o, long p, long q, long r, long s, long t) {
    long z = 0;
    z = m + n + o + p + q + r + s + t;
    return z;
}
long main()
{
    long a = 10;
    long b = 20;
    long c = 30;
    long d = 40;
    long e = 50;
    long f = 60;
    long g = 70;
    long g1 = 80;
    long h = 0;
    h = foo(a, b, c, d, e, f, g, g1);
    return 0;
}
