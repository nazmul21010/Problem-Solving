#include <stdio.h>
#include <string.h>
int main()
{

    char str[100];
    char str2[100];
    int count = 0;
    scanf("%s%s", &str, &str2);

    int a = strlen(str);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (str[i] == str2[j])
            {
                count++;
            }
        }
    }
    if (count == a)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}