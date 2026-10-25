#include <stdio.h>
int fabo(int x)
{
    if (x == 0 || x == 1)
    {
        return x;
    }
    else
    {
        return fabo(x - 1) + fabo(x - 2);
    }
}
int main()
{
    int a;
    int b;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++)

    {
        if (i == 2)
        {
            continue;
        }
        else
        {

            if (a <= fabo(i) && b >= fabo(i))

                printf("%d\n", fabo(i));
        }
    }
    return 0;
}