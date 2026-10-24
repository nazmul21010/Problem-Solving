#include <stdio.h>
#include <string.h>

int main()
{
    char ch[300];
    while (fgets(ch, sizeof(ch), stdin) != NULL)
    {
        int len = strlen(ch);

        if (ch[len - 1] == '\n')
        {
            ch[len - 1] = '\0';
            len--;
        }

        for (int i = 0; i < len; i++)
        {
            if (ch[i] == '@')
            {
                ch[i] = 'a';
            }
            else if (ch[i] == '&')
            {
                ch[i] = 'e';
            }
            else if (ch[i] == '!')
            {
                ch[i] = 'i';
            }
            else if (ch[i] == '*')
            {
                ch[i] = 'o';
            }
            else if (ch[i] == '#')
            {
                ch[i] = 'u';
            }
        }
        printf("%s\n", ch);
    }

    return 0;
}
