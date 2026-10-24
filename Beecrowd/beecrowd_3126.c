#include <stdio.h>
int main()
{

    int t, sum = 0;
    scanf("%d", &t);
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < t; i++)
    {
        if (arr[i] == 0)
        {
            sum++;
        }
    }
    printf("%d\n", t - sum);
}