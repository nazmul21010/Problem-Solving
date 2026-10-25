#include <stdio.h>
#include <stdlib.h>
int twosum(int prices[], int pricesSize)
{
    if (pricesSize < 5)
    {
        int p, h, x = 0;
        p = prices[1];
        h = prices[0];
        x = p - h;
        if (x > 0)
        {
            return x;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        int x, y, sum = 0;
        x = prices[1];
        y = prices[4];
        sum = y - x;
        if (sum > 0)
        {
            return sum;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x = twosum(arr, t);
    printf("%d", x);
}