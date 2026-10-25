#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int arr[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < t; i++)
    {
        printf("%d/%d\n", arr[0], arr[i]);
    }
    return 0;
}