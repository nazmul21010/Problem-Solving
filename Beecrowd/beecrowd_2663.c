#include<stdio.h>
int main(){
int a,b,count;
scanf("%d %d",&a,&b);
b=count;
int arr[a];
for(int i=0;i<a;i++)
{
    scanf("%d",&arr[i]);
}
int temp;
for(int i=0;i<a-1;i++){
    for(int j=i+1;j<a;j++){
  if(arr[i] >arr[j]){
  temp=arr[i];
  arr[i]=arr[j];

arr[j]=temp;
  }

    }
}
for(int i=b;i<a;i++){
    if(arr[b-1]==arr[i]){
        count++;
    }
}
printf("%d\n",count);
return 0;

}