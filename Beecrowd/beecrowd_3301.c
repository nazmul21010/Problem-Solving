#include<stdio.h>
int main(){

int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a<b && a>c || a>b && c>a)
printf("huguinho\n");
else if(a>b && b>c || a<b && c>b)
printf("zezinho\n");
else if(a>b && c>b || a<b && c>a)
printf("luisinho\n");
return 0;
}