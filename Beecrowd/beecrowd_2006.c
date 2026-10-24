#include<stdio.h>
int main()
{
  int arr[5];int count=0,a;
  scanf("%d",&a);
  for(int i=0;i<=4;i++){
 scanf("%d",&arr[i]);
  }
  for(int i=0;i<5;i++){
    if(arr[i]==a)
    count++;
  }
printf("%d\n",count);
return 0;
}