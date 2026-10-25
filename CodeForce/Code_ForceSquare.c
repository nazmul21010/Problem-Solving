#include <stdio.h>
int main()
{

    long long int a, b, c, x, s, p;
    scanf("%lld%lld%lld", &a, &b, &c);
    s = (a + c - 1) / c;
    p = ((b + c - 1) / c);

    x = s * p;
    printf("%lld\n", x);
    return 0;
}