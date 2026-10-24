#include <stdio.h>
#include <string.h>
int validDay(char str[])
{
    int x = strlen(str);
    int i = 0, c = 0, s = 0;
    while (str[i] != '-')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            c++;
        }
        i++;
    }
    for (int i = 0; i < x; i++)
    {
        if (str[i] == '-')
        {
            s = 1;
        }
    }
    if (c == 3 && s == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str[101];
        scanf("%s", &str);
        int x = validDay(str);
        if (x == 0)
        {
            printf("FAILURE\n");
        }
        else if (x == 1)
        {
            int len = strlen(str);
            if (str[len - 1] == '1' || str[len - 1] == '2')
            {
                printf("MONDAY\n");
            }
            else if (str[len - 1] == '3' || str[len - 1] == '4')
            {
                printf("TUESDAY\n");
            }
            else if (str[len - 1] == '5' || str[len - 1] == '6')
            {
                printf("WEDNESDAY\n");
            }
            else if (str[len - 1] == '7' || str[len - 1] == '8')
            {
                printf("THURSDAY\n");
            }
            else if (str[len - 1] == '9' || str[len - 1] == '0')
            {
                printf("FRIDAY\n");
            }
        }
    }

    return 0;
}