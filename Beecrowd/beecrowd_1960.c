#include<stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   if(a/1000)
    printf("M");
   if((a%1000)/500)
   printf("D");
   if((((a%1000)%500)/100))
   printf("C");
   if((((((a%1000)%500)%100)/50)))
  printf("L");
if(((((((a%1000)%500)%100)%50)/10)))
printf("X");
if((((((((a%1000)%500)%100)%50)%10/5))))
printf("V");
if(((((((((a%1000)%500)%100)%50)%10%5)/1))))
printf("I");
return 0;
}