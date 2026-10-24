#include<stdio.h>
int main()
{
   int a,count=0,count1=0;char str[10];char ch;
   scanf("%d",&a);
   for(int i=0;i<a;i++){
    scanf("%s %c",&str,&ch);
 if(ch=='M') 
 count++;
if(ch=='F') 
count1++;
   }
   printf("%d carrinhos\n",count);
   printf("%d bonecas\n",count1);
return 0;
}