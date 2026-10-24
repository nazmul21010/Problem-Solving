#include<stdio.h>
int main()
{

  int b;
  scanf("%d",&b);
    int arr[b];
    for(int i=0;i<b;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<b;i++){
        if(arr[i] <2015 || arr[i]==0)
        printf("%d D.C.\n",(2015-arr[i]));
        else if(arr[i] ==2015)
        printf("1 A.C.\n");
        else if(arr[i]>2015)
        printf("%d A.C.\n",(arr[i]-2015)+1);
    }
  
 return 0;


}