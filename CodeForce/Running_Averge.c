#include <stdio.h>
int main()
{

    int a;
    scanf("%d", &a);
    float arr[a];
    float sum = 0.0;
    for (int i = 1; i <= a; i++)
    {
        scanf("%f", &arr[i]);
        sum += arr[i];
        printf("%f\n", (sum / i));
    }
    return 0;
}