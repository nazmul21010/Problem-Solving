#include<stdio.h>
int main()
{
  char str;
  int count=0;
  scanf("%c",&str);
  for(int i='A'; i<=str;i++){
  count++;
  }
 
printf("%d\n",count);
return 0;

}