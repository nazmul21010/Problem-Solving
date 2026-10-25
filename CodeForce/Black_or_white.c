#include <stdio.h>
int main()
{

    int a, b;
    scanf("%d%d", &a, &b);
    if (a == b)
    {

        printf("Black\n");
    }
    else if (a < b || a > b)
    {
        printf("Black\n");
    }
    else if (a % 2 != 0 && b % 2 == 0)
    {
        printf("White\n");
    }
    else if (a % 2 != 0 && b % 2 != 0)
    {
        printf("Black\n");
    }
    else if (a % 2 == 0 && b % 2 == 0)
    {
        printf("Black\n");
    }
    return 0;
}
