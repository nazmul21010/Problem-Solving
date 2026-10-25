#include <stdio.h>
int main()
{
    int a, b, c = 0;
    scanf("%d%d", &a, &b);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++)
    {

        if (arr[i] <= a && arr[i] >= b || arr[i] <= b && arr[i] >= a)
        {
            c++;
        }
    }
    printf("%d\n", c);
    return 0;
}