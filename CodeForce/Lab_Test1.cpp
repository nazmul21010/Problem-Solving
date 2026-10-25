#include <stdio.h>
#include <string.h>
void reverseString(char *s, int sSize)
{
    char str[sSize];
    int c = 0;
    for (int i = sSize - 1; i >= 0; i--)
    {
        str[c] = s[i];
        c++;
        if (c == sSize - 1)
        {
            break;
        }
    }
    printf("%s", str);
}
int main()
{

    char str[45];
    scanf("%s", str);
    reverseString(str, strlen(str));
}