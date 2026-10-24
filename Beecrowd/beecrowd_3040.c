#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
for(int i=0;i<a;i++){
int m,n,o;
scanf("%d%d%d",&m,&n,&o);
if(m>=200 && m<=300 && n>=50 && o>=150)
printf("Sim\n");
else printf("Nao\n");}
return 0;
}