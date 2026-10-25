#include <stdio.h>

int main()
{
    int a;
    int sum = 0;
    scanf("%d", &a);
    if (a > 0 && a < 100)
    {

        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0)
                printf("%d\n", i);
        }
    }

    return 0;
}