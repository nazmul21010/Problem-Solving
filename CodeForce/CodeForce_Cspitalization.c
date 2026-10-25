#include <stdio.h>
#include <string.h>
int main()
{

    char str[1001];
    scanf("%s", &str);
    int a = strlen(str);
    for (int i = 0; i < a; i++)
    {
        if (str[0] >= 'a' && str[0] <= 'z' && i == 0)
        {
            printf("%c", str[i] - 32);
        }
        else if (i >= 0)
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}