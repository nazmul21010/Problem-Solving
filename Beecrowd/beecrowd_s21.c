#include <stdio.h>
#include <string.h>
int partition(int a[], int start, int end)
{
    int pivot = a[end];
    int i = (start - 1);

    for (int j = start; j <= end - 1; j++)
    {

        if (a[j] < pivot)
        {
            i++;
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
}
void quick(int a[], int start, int end)
{
    if (start < end)
    {
        int p = partition(a, start, end);
        quick(a, start, p - 1);
        quick(a, p + 1, end);
    }
}
void print(int arr[], int a)
{
    for (int i = 0; i < a; i++)
    {
        printf("%d", arr[i]);
    }
}
int main()
{
    int a;
    int arr[100];
    char str[200];
    scanf("%d", &a);
    while (a--)
    {
        int c = 0;
        scanf("%s", &str);
        int x = strlen(str);
        arr[c] = x;
        printf("%d", arr[c]);
        c++;
    }
    quick(arr, 0, a);
    print(arr, a);
    return 0;
}