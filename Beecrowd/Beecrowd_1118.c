#include <stdio.h>

int main()
{
    int c = 0;
    double sum = 0.0;

    while (1)
    {
        double a;
        scanf("%lf", &a);
        if (a < 0.0 || a > 10.0)
        {
            printf("nota invalida\n");
        }
        else
        {
            sum += a;
            c++;
        }
        if (c == 2)
        {

            printf("media = %.2lf\n", sum / 2.0);

            int x;
            do
            {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &x);

            } while (x != 1 && x != 2);

            if (x == 2)
            {
                break;
            }

            sum = 0.0;
            c = 0;
        }
    }
    return 0;
}
