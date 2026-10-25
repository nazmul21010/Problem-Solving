#include <stdio.h>
int main()
{

    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        int arr[2];
        float sum = 0.0;
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < 2; i++)
        {
            sum += arr[i];
        }
        float s = floor(sum / 2);
        printf("%d", s);
        if (s % 2 == 0)
        {
            printf("Sadia will be happy.\n");
        }
        else if (s % 2 != 0)
        {
            printf("Oops!\n");
        }
    }
    return 0;
}