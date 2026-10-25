#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    while (a--)
    {
        int b, sum, count = 0;
        scanf("%d", &b);
        int arr[b];
        for (int i = 0; i < b; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < b; i++)
        {
            sum = arr[i] + arr[i + 1];
            if (sum == arr[i + 1] + arr[i + 2])
            {
                count++;
            }
        }
        if (count == abs(b - 1) || b == 2)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}