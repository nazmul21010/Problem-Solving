#include <stdio.h>
int main()
{
    int s, r, rr;
    scanf("%d", &s);
    int sum = 0, su = 0;
    while (s > 0)
    {
        r = s % 10;
        sum = sum + r;
        s = s / 10;
    }
    while (sum > 0)
    {
        rr = sum % 10;
        if (rr != 0)
        {
            su = su + rr;
            sum = sum / 10;
        }
    }
    if (su == 10)
    {
        printf("1");
    }
    else
    {
        printf("%d", su);
    }
    return 0;
}