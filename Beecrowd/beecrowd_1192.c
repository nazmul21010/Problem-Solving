#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[4];
        scanf("%s", s);
        int a = atoi(&s[0]);
        int b = atoi(&s[2]);

        if (s[1] >= 'A' && s[1] <= 'Z' && a != b)
        {
            printf("%d\n", b - a);
        }
        else if (a == b)
        {
            printf("%d\n", b * a);
        }
        else if (s[1] >= 'a' && s[1] <= 'z')
        {
            printf("%d\n", b + a);
        }
    }
    return 0;
}
