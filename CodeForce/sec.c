#include <stdio.h>
#include <string.h>
void print(char str[], int size)
{
    if (size == 1)
    {
        printf("%c", str[0]);
    }
    else
    {
        int c = 0;
        for (int i = 0; i < size; i++)
        {
            for (int k = 0; k < c; k++)
            {
                printf(" ");
            }
            for (int j = 0; j < size - i; j++)
            {
                printf("%c", str[j]);
                if (j < size - 1)
                {
                    printf(" ");
                }
            }
            if (i < size - 1)
            {
                printf("\n");
            }
            c++;
        }
    }
    printf("\n");
}
int main()
{
    char str[101];
    while (scanf("%s", str) != EOF)
    {
        print(str, strlen(str));
    }
    printf("\n");
    return 0;
}