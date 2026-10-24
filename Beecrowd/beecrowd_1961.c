#include<stdio.h>
#include<math.h>
int main()
{
  int a;int b,count=0,sum;
scanf("%d%d",&a,&b);
int arr[b];
for(int i=0;i<b;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<b;i++){
    sum=abs(arr[i]-arr[i+1]);
    if(sum<=a)
    count++;
}
if(count==b-1)
printf("YOU WIN\n");
else printf("GAME OVER\n");
return 0;
}