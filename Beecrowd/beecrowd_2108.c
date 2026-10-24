#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[101];
    while (1)
    {
        gets(str);
        if (str[0] == '0')
        {
            return 0;
        }
        else
        {
            int speach = 0;
            int k = 0;
            int charcounter = 0;

            for (int i = 0; i < strlen(str); i++)
            {
                if (str[i] != ' ')
                {
                    charcounter++;
                }
                else if (str[i] == ' ')
                {
                    speach++;
                    printf("%d", charcounter);
                    printf("-");
                    k++;
                    charcounter = 0;
                }
            }
            printf("%d\n", charcounter);
        }
    }
    return 0;
}