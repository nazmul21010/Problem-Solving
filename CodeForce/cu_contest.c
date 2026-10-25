#include <stdio.h>

int count(double a, double b)
{
    double rsum = 0.0;
    double ssum = 0.0;
    int c = 0;
    if (a < b)
    {
        return 1;
    }
    else if (a == b)
    {
        return 2;
    }
    else
    {

        while (ssum <= rsum)
        {
            rsum += a;
            ssum += b;
            a = a / 2;
            c++;
        }
        return c;
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int counter = 1; counter <= t; counter++)
    {
        double a, b;
        scanf("%lf %lf", &a, &b);
        printf("Case #%d: %d\n", counter, count(a, b));
    }
    return 0;
}
