#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    scanf("%d", &x);
    int arr[x];
    int sum = 0;
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < x; i++)
    {
        if (arr[i] == 0)
        {
            sum++;
        }
    }
    int t = abs(sum - x);
    if (sum > t)
    {
        printf("Y\n");
    }
    else
    {
        printf("N\n");
    }
    return 0;
}