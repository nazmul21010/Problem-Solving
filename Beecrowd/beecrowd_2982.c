#include<stdio.h>
#include<string.h>
int main()
{
  int a,sum=0,sum1=0;
  scanf("%d",&a);
 int arr[a],m;char str[1];
 for(int i=0;i<a;i++){
  scanf("%s%d",&str,&m);
 
 if(str[0]=='G')
 sum=sum-m;
 else
 sum=sum+m;
 
 }
if(sum>=0)
printf("A greve vai parar.\n");
else 
printf("NAO VAI TER CORTE, VAI TER LUTA!\n"); 

  return 0;

}