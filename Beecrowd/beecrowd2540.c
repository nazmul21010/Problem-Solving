#include<stdio.h>
int main(){
int a;
while (scanf("%d",&a)!=EOF)
{
    int count=0;
    int arr[a];
    for(int i=0;i<a;i++)
{
  scanf("%d",&arr[i]);
}

for(int i=0;i<a;i++)
{
    if(arr[i]==1)
    count++;
}
float sum=(count*100)/a;
if(sum>=66.00)
printf("impeachment\n");
else printf("acusacao arquivada\n");


}
return 0;
}