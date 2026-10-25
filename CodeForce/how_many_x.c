#include <stdio.h>
#include <string.h>
int main()
{

    char str[17];
    scanf("%s", &str);
    int a = strlen(str);

    for (int i = 0; i <= a; i++)
    {
        if (str[i] == 's')
        {
            str[i] = '$';
        }
        if (str[i] == 'i')
        {
            str[i] = '!';
        }
        if (str[i] == 'o')
        {
            printf("()");
            continue;
        }
        if (i == 0)
        {
            printf("%c", toupper(str[0]));
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    printf(".\n");
    return 0;
}