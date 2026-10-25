#include <stdio.h>
int main()
{

    int a, b;
    scanf("%d%d", &a, &b);
    if (a > -20000000 && b < 20000000)
    {

        printf("%d\n", a + b);
    }
    return 0;
}