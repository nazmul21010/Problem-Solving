#include <stdio.h>
int main()
{
    int a;

    scanf("%d", &a);
    if (a > -200000000 && a < 200000000)
    {
        printf("%d", a);
    }
    return 0;
}