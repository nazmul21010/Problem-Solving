#include<stdio.h>
#include<string.h>
int main()
{
   int a;char str[20];char ch;
   scanf("%d",&a);int count=0,count1=0,count2=0,count3=0,count4=0;
   for(int i=0;i<a;i++){
  scanf("%s %c",&str,&ch);
  if(ch=='X')
   count++;
  if(ch=='H')
count1++;
if(ch=='E')
 count2++;
 if(ch=='A')
 count3++;
 if(ch=='M')
 count4++;
   }
   printf("%d Hobbit(s)\n",count);
   printf("%d Humano(s)\n",count1);
   printf("%d Elfo(s)\n",count2);
   printf("%d Anao(oes)\n",count3);
   printf("%d Mago(s)\n",count4);
   return 0;

}