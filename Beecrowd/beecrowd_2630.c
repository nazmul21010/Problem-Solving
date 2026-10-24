#include<stdio.h>
#include<string.h>
int main()
{
  int a;
  scanf("%d",&a);
  for(int i=1;i<=a;i++){
    int arr[10],max,min;char str[10];

    scanf("%s",&str);
     for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
     }
    if(strcmp(str,"min")==0)
    {  
        min=arr[0];
       for(int i=0;i<3;i++){
       if(arr[i]<min){
       min=arr[i];
       }
       }
       printf("Caso #%d: %d\n",i,min);
    }
    else if(strcmp(str,"max")==0)
    {  
        max=arr[0];
       for(int i=0;i<3;i++){
       if(arr[i]>max){
       max=arr[i];
       }
            
        }
        printf("Caso #%d: %d\n",i,max);
    }
    else if(strcmp(str,"mean")==0){
        int sum=0;
        for(int i=0;i<3;i++){
            sum=sum+arr[i];
        }
        printf("Caso #%d: %d\n",i,sum/3);
    }
    else if(strcmp(str,"eye")==0){
        int sum=arr[0]*0.3+arr[1]*0.59+arr[2]*0.11;
       
        printf("Caso #%d: %d\n",i,sum);
    }
  }
  return 0;
}