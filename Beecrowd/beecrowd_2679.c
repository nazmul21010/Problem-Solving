#include <stdio.h>
int main()
{
    int e;
    scanf("%d", &e);
    if (e % 2 == 0)
    {
        printf("%d\n", e + 2);
    }
    else
    {
        printf("%d\n", e + 1);
    }
    return 0;
}