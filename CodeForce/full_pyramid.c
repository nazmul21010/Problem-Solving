#include <stdio.h>
void print(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
            if (k < i)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int a;
    scanf("%d", &a);

    print(a);

    return 0;
}