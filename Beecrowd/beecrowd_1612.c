#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    double arr[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%lf", &arr[i]);
    }
    for (int i = 0; i < t; i++)
    {
        printf("%.0lf\n", ceil(arr[i] / 2));
    }
    return 0;
}