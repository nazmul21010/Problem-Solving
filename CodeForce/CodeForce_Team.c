#include <stdio.h>
int main()
{

    int a;
    scanf("%d", &a);

    int count = 0;
    while (a--)
    {
        int s, m, n;
        scanf("%d%d%d", &s, &m, &n);
        if (s == m && s != 0 && m != 0 || s == n && s != 0 && n != 0 || m == n && m != 0 && n != 0)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
