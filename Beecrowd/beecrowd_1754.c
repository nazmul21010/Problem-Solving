#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        double a, b;
        scanf("%lf%lf", &a, &b);
        double res = ceil(a / b);
        if (res == 1)
        {
            printf("%.0f\n", res + 1);
        }
        else
        {
            printf("%.0f\n", res);
        }
    }

    return 0;
}