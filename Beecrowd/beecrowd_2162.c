#include<stdio.h>
int main(){

int a;
scanf("%d",&a);
int arr[a];
for(int i=0;i<a;i++)
{
   scanf("%d",&arr[i]);

}
int count=0,count1=0;
for(int i=0;i<a;i=i+2)
{ 
   if(arr[i]>arr[i+1])
  {
         count++;
  }
      else if(arr[i]<arr[i+1])
    {
      count1++;
    }

}
if(count==a/2|| count1==a/2)
printf("1\n");
else if( a%2!=0 && count==(a/2)+1||a%2!=0 && count1==(a/2)+1)
printf("1\n");

else printf("0\n");
return 0;

}