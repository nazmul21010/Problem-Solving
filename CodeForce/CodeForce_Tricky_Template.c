#include <stdio.h>
int main()
{

    int a;
    scanf("%d", &a);
    while (a--)
    {
        int b, count = 0, count1 = 0;
        scanf("%d", &b);
        char str[b];
        char str1[b];
        char str2[b];
        scanf("%s%s%s", &str, &str1, &str2);

        for (int i = 0; i < b; i++)
        {
            if (str[i] == str1[i])
            {
                count++;
            }
        }
        for (int i = 0; i < b; i++)
        {
            if (str[i] != str2[i])
            {
                count1++;
            }
        }

        if (count == b && count1 != b)
        {
            printf("Yes\n");
        }

        else
        {
            printf("No\n");
        }
    }
}