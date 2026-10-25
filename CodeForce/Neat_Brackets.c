#include <stdio.h>
#include <string.h>
int main()
{
    char str[25];
    scanf("%s", &str);

    int a = strlen(str);
    int x = a / 2;
    printf("%d\n", x);
    int count = 0;

    for (int i = 0; i < x; i++)
    {
        for (int j = a - 1; j >= x; j--)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
    if (count == x)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}