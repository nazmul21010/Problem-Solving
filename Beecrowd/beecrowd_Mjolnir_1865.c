#include<stdio.h>
#include<string.h>
int main()
{
   int a;
   scanf("%d",&a);
   int b;
   char str[10];
   for(int i=0;i<a;i++){
  scanf("%s %d",str,&b);
  if(!strcmp(str,"Thor")){
  printf("Y\n");
  }
  else{
 printf("N\n");
  }

   }
return 0;

}
