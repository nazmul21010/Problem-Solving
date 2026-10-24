#include <stdio.h>
int main()
{

    int a;
    scanf("%d", &a);
    while (a--)
    {
        int b, count = 0;
        scanf("%d", &b);
        int arr[b];
        for (int i = 0; i < b; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < b; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                count++;
                break;
            }
        }
        if (count == 0)
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