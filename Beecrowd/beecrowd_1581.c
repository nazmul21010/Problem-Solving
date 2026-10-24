#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, c = 1;
        scanf("%d", &x);
        int temp = x;
        char v[100][100];
        char str[100], str2[100] = "";
        for (int i = 0; i < x; i++)
        {
            scanf("%s", v[i]);
        }
        if (x == 1)
        {
            printf("%s\n", v[0]);
        }
        else
        {
            for (int i = 0; i < x - 1; i++)
            {
                if (strcmp(v[i], v[i + 1]) == 0)
                {
                    strcpy(str2, v[i]);
                    c++;
                }
            }
            if (temp != c)
            {
                printf("ingles\n");
            }
            else if (c == temp)
            {
                printf("%s\n", str2);
            }
        }
    }
    return 0;
}
