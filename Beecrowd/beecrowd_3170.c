#include<stdio.h>
int main()
{
   int a,b,multiply;
   scanf("%d%d",&a,&b);
 multiply=b/2;
if(a>=multiply)
printf("Amelia tem todas bolinhas!\n");
else printf("Faltam %d bolinha(s)",(multiply-a));
return 0;
}