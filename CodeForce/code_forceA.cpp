#include <stdio.h>
#include <stdbool.h>

bool canBeSorted(int *a, int n)
{
    // Create the concatenated array a + a
    int concatenated[2 * n];
    for (int i = 0; i < n; i++)
    {
        concatenated[i] = a[i];
        concatenated[i + n] = a[i];
    }

    // Check for each possible rotation
    for (int start = 0; start < n; start++)
    {
        bool isSorted = true;
        for (int i = 1; i < n; i++)
        {
            if (concatenated[start + i - 1] > concatenated[start + i])
            {
                isSorted = false;
                break;
            }
        }
        if (isSorted)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        if (canBeSorted(a, n))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}
