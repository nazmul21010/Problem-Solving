#include <stdio.h>

int fab(int a)
{
    if (a == 0 || a == 1)
    {
        return a;
    }
    else
    {
        return fab(a - 1) + fab(a - 2);
    }
}

int main()
{
    int a, x;
    scanf("%d", &a);
    for (int i = 0; i <= a; i++)
    {
        x = fab(i);
    }
    printf("%d\n", x);
    return 0;
}