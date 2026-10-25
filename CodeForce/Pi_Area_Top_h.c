#include <stdio.h>
int main()
{
    int a;

    scanf("%d", &a);
    if (a > 0 && a < 100)
    {
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &arr[i]);
        }
        int max = arr[0];
        for (int i = 0; i < a; i++)
        {

            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        printf("%d\n", max);
    }
    else
    {
        return 0;
    }
}
