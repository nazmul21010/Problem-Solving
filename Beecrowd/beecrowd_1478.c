#include<stdio.h>
int main()
{
   int a;
   while (1)
   {
    scanf("%d",&a);
    if(a==0) break;
    int arr[a][a];
    for(int i=1;i<=a;i++){
        for(int j=i;j<=a;j++){

printf("%d ",j);
        }
        printf("\n");
        }
   }
return 0;
}