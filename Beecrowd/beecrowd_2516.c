#include <stdio.h>
int main()
{
    double s, va, vb;
    while (scanf("%lf%lf%lf", &s, &va, &vb) != EOF)
    {

        double x = va - vb;
        if (x <= 0)
        {
            printf("impossivel\n");
        }
        else
        {
            double res = s / x;

            printf("%.2lf\n", res);
        }
    }

    return 0;
}