#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void encrypt_line(char *str)
{
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            str[i] = str[i] + 3;
        }
    }

    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    int mid = len / 2;
    for (int i = mid; i < len; i++)
    {
        str[i] = str[i] - 1;
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 0; i < t; i++)
    {
        char str[1001];
        fgets(str, sizeof(str), stdin);

        str[strcspn(str, "\n")] = '\0';

        encrypt_line(str);
        printf("%s\n", str);
    }

    return 0;
}
