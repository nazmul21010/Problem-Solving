#include <stdio.h>
int main()
{
    int a, c[100];

    scanf("%d", &a);
    while (a--)
    {
        int b, i;
        scanf("%d", &b);
        for (i = 0; i < b * 2; i++)
        {

            scanf("%d", &c[i]);
        }
        int sum = 0;
        for (i = 0; i <= 1; i++)
        {
            sum = sum + c[i];
        }
        if (sum % 2 != 0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}