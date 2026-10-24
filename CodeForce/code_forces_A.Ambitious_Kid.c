#include<stdio.h>
int main()
{
    int a,temp;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a-1;i++){
      for(j=i+1;j<a;j++){
        if(abs(arr[i])>abs(arr[j]))
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }

    printf("%d\n",arr[0]);
    return 0;

    }