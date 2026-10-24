#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d", &a);
    while (a--)
    {
        char str[101];
        scanf("%s", &str);
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == 'p')
            {
                str[i] = 'q';
            }
            else if (str[i] == 'q')
            {
                str[i] = 'p';
            }
        }
        for (int i = strlen(str) - 1; i >= 0; i--)
        {
            printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}