#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d", &a);
    while (a--)
    {
        int count = 0;
        char str[20];
        scanf("%s", &str);

        int c = strlen(str);
        for (int i = 1; i <= c; i++)
        {
            if (str[i] == 'a')
            {
                count++;
            }
        }
        if (count % 2 == 0)
        {
            for (int i = 0; i < ((20 - count) / 2); i++)
            {
                printf(" ");
            }
            printf(" %s\n", str);
        }
        else if (count % 2 != 0 && c != 2)
        {
            for (int i = 0; i < ((20 - count) / 2); i++)
            {
                printf(" ");
            }
            for (int i = 0; i < c - 1; i++)
            {
                printf("%c", str[i]);
            }
            printf("\n");
        }
        else if (c == 2 && count % 2 != 0)
        {
            for (int i = 0; i < ((20 - count) / 2); i++)
            {
                printf(" ");
            }
            printf(" %s", str);
            printf("a\n");
        }
    }
    return 0;
}