#include <stdio.h>
int count(int x)
{
    return x * 4;
}
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", count(x));
    return 0;
}