#include <stdio.h>
#include <string.h>
int main()
{

    char arr[101];
    int c = 0, d = 0;
    char a = '0', b = '1';
    gets(arr);
    int len = strlen(arr);
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == '0')
        {
            c++;
        }
        else if (arr[i] == '1')
        {
            d++;
        }
    }

    if (c > d)
    {
        printf(arr);
        printf("%c", a);
    }
    else if (c < d)
    {
        printf(arr);
        printf("%c", b);
    }
    return 0;
}