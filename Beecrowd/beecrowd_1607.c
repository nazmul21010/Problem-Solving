#include <stdio.h>
#include <string.h>
#include <math.h>
void operation(char str1[], char str2[])
{
    int x = strlen(str1);
    int y = strlen(str2);
    int sum = 0;
    for (int i = 0; i < x; i++)
    {

        sum += abs((abs(97 - str1[i]) - abs(97 - str2[i])));
        printf("%d\n", sum);
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str1[101], str2[101];
        scanf("%s%s", &str1, str2);
        operation(str1, str2);
    }

    return 0;
}