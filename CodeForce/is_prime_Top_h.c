#include <stdio.h>
int main()
{
    int a, count = 0;
    scanf("%d", &a);
    for (int i = 2; i <= a; i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}