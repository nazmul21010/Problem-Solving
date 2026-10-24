#include <stdio.h>
int main()
{
    double x;
    int a;
    scanf("%lf%d", &x, &a);
    printf("%.2lf\n", x / a);
    return 0;
}