#include <stdio.h>
int sum(int x, int y);
int sum(int x, int y)
{

    return x * y;
}
int main()
{
    int t;
    scanf("%d", &t);
    int c = 0;
    while (t--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        c = c + sum(a, b);
    }
    printf("%d\n", c);
    return 0;
}