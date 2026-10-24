#include<stdio.h>
int main()
{
int arr[5];int sum=0;
  for(int i=0;i<=4;i++){
 scanf("%d",&arr[i]);
  }
  for(int i=0;i<5;i++){
    sum+=arr[i];
  }
if(sum%2==0 && arr[0]%2==0)
printf("Jogador 1 ganha!\n");
else if(sum%2!=0 && arr[1]%2!=0)
printf("Jogador 2 ganha!\n");
else if(sum%2!=0 && arr[0]%2!=0)
printf("Jogador 1 ganha!\n");
else if(sum%2==0 && arr[1]%2==0)
printf("Jogador 2 ganha!\n");





return 0;
}
