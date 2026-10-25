#include <stdio.h>
#include <string.h>
int main()
{
    int a, c;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        char str[101];
        scanf("%s", &str);

        c = strlen(str);
        int co = 0, co1 = 0;
        for (int i = 0; i < c; i++)
        {
            if (str[i] == 'W' || str[i] == 'D' || str[i] == 'N' && str[i] < '0' && str[i] > '6')
            {
                co++;
            }
            else
            {
                co1++;
            }
        }
        int x = co1 % 6;
        int s = ((co1 - x) / 6);

        if (co1 == c && x == 0)
        {
            printf("%d OVERS\n", s);
        }
        else if (x == 0 && co1 != c)
        {
            printf("%d OVER\n", s);
        }
        else if (co1 != c && x != 0)
        {
            printf("%d OVER %d BALL\n", s, x);
        }

        else if (x != 0 && s == 0 && co1 == c)
        {
            printf("%d BALLS\n", x);
        }
        else if (x != 0 && s == 0 && co1 != c)
        {
            printf("%d BALL\n", x);
        }
    }
}