#include <stdio.h>
#include <string.h>
int main()
{

    char str[17];
    scanf("%s", &str);
    int a = strlen(str);

    printf("%c", toupper(str[0]));
    for (int i = 1; i <= a; i++)
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

        printf("%c", str[i]);
    }
    if (str[a - 1] == '$' || str[a - 1] == 'o' || str[a - 1] == '!')
    {
        printf("\n");
    }
    else
    {

        printf(".\n");
    }

    return 0;
}