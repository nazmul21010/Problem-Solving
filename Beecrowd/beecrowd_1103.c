#include <stdio.h>
#include <math.h>
int main()
{
    int h1, h2, m1, m2;
    while (scanf("%d%d%d%d", &h1, &m1, &h2, &m2))
    {
        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
        {
            return 0;
        }
        else
        {
            int minute1 = h1 * 60 + m1;
            int minite2 = (h2 * 60 + m2);

            if (minute1 > minite2)
            {
                minite2 += 24 * 60;
            }

            int final_minite = minite2 - minute1;
            printf("%d\n", final_minite);
        }
    }
    return 0;
}