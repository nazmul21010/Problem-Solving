#include <stdio.h>
#include <string.h>
int main()
{

    int a = 0;

    char str[100];
    scanf("%s", str);
    int x = strlen(str);
    for (int i = 0; i < x; i++)
    {
        if (str[i] == 'X')
        {
            a++;
        }
    }
    printf("%d\n", a);
    return 0;
}
