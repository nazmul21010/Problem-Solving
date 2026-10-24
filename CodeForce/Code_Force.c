#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    while (a--)
    {
        int b, count = 0, count1 = 0;
        scanf("%d", &b);
        char ch[b];
        scanf("%s", &ch);
        if (ch[b - 1] == 'A')
        {
            printf("A\n");
        }
        if (ch[b - 1] == 'B')
        {
            printf("B\n");
        }
    }
    return 0;
}