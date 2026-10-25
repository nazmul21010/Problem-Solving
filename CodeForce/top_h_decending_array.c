#include <stdio.h>
int main()
{
    int a, count = 0;
    scanf("%d", &a);

    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a - 1; j++)
        {
            if (arr[i] > arr[j])
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
    return 0;
}