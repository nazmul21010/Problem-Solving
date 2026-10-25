#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    scanf("%d",&a);
char str[a];
memset(str,'c',sizeof(char)* a);
for(int i=0;i<a;i++){
    printf("%c",str[i]);
}



    return 0;
}