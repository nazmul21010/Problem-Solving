#include <stdio.h>
int main()
{

    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        char str[101];
        scanf("%s", &str);

        for (int i = 0; i < a; i++)
        {
            if (str[i] == str[i + 1])
            {
                printf("%c", str[i + 1]);
            }
            else
            {
                printf("%c", str[i]);
            }
        }
    }
    return 0;
}