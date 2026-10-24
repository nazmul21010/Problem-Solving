#include <stdio.h>

int min_operations(int n, int a[])
{
    int min_ops = n - 1;

    for (int start = 0; start < n; ++start)
    {
        int ops = 0;
        int i = start;
        int j = (start + 1) % n;

        while (j != start)
        {
            if (a[i] != a[j])
            {
                ops++;
                i = j;
            }
            j = (j + 1) % n;
        }

        min_ops = (ops < min_ops) ? ops : min_ops;
    }

    return min_ops;
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

        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }

        int result = min_operations(n, a);
        printf("%d\n", result);
    }

    return 0;
}
