#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    float arr[t];
    float legs;
    for (int i = 0; i < t; i++)
    {
        scanf("%f", &arr[i]);
    }
    for (int i = 0; i < t; i++)
    {
        if (arr[i] < 3.0)
        {
            legs = ceil(arr[i] / 2.0);
        }
        else
        {
            legs = ceil(arr[i] / 4.0);
        }
        printf("%.0f\n", legs);
    }

    return 0;
}