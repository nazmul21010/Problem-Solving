#include <stdio.h>
#include <string.h>
int main()
{

    char str[101];
    scanf("%s", &str);
    int a = strlen(str);
    int temp, c = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - 1; j++)
        {
            if (str[i] < str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (str[i] != str[i + 1])
        {
            c++;
        }
    }
    if (c % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}