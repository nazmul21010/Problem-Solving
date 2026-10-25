#include<stdio.h>
#include<string.h>

int main(void)
{
    int x;
    scanf("%d",&x);
    while(x--){

            char line[1000];
            fgets(line, sizeof(line), stdin);
            printf("%d %d\n",sizeof(line),strlen(line));

    }
    return 0;
}
