#include<stdio.h>
#include<math.h>
int main(){

int a,s;
scanf("%d",&a);
s=(a*a)/2;
if(a%2!=0)
printf("%d casas brancas e %d casas pretas",s+1,s);
else printf("%d casas brancas e %d casas pretas",s,s);
return 0;
}