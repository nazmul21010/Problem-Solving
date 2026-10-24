#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getUpper(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
        }
    }
}

int main()
{
    char str[1001];
    while (fgets(str, sizeof(str), stdin))
    {

        if (strcmp(str, "*\n") == 0)
        {
            break;
        }

        getUpper(str);
        char temp = str[0];
        int c = 1;
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == ' ')
            {
                if (str[i + 1] != temp)
                    c++;
            }
        }
        if (c == 1)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}
