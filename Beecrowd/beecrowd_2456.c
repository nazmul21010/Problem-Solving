#include <stdio.h>
int dessort(int arr[], int x);
int assSort(int arr[], int x);

int sorted(int arr[], int x)
{

    if (dessort(arr, 5) == 1)
    {
        return 1;
    }
    else
    {

        int x;
        for (int i = 0; i < x; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                x = 0;
                return x;
            }
            x = 1;
        }
        if (x > 0)
        {
            return -1;
        }
        else if (x == 0)
        {
            return 0;
        }
    }
}

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x = sorted(arr, 5);
    if (x == 1)
    {
        printf("D\n");
    }
    else if (x == -1)
    {
        printf("C\n");
    }
    else
    {
        printf("N\n");
    }
    return 0;
}

int dessort(int arr[], int x)
{
    for (int i = 0; i < x; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            return 0;
        }
    }
    return 1;
}
