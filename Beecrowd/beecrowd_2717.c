#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d%d",&b,&c);
    int sum=b+c;
 if(a>=sum){
printf("Farei hoje!\n");
 }
else if(a<sum) {printf("Deixa para amanha!\n");}
return 0;
}