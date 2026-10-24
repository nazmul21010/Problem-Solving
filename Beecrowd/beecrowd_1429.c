#include <stdio.h>
int fact(int a)
{
    int fact = 0;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{

    int a;

    while (scanf("%d", &a) != 0)
    {

        int r, result = 0;
        while (a > 0)
        {
            r = a % 10;
            result = result + fact(r);
            a = a / 10;
        }
        printf("%d\n", result);
    }

    return 0;
}