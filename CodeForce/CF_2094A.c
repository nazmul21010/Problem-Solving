#include <stdio.h>
#include <string.h>

int main()
{
    int a;
    scanf("%d", &a);
    char str[101],str2[101],str3[101];
    for (int i = 0; i < a; i++)
    {
        scanf("%s%s%s",&str,&str2,&str3);
        printf("%c%c%c\n",str[0],str2[0],str3[0]);
    }

    return 0;
}
