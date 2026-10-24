#include<stdio.h>
int main()
{
int a,n=1;

  while (scanf("%d",&a)!=EOF)
  {
 int count=0;
     for(int i=0;i<=a;i++){
        for(int j=0;j<i;j++){
           count++;
        }
     }
  if(a==0){
  printf("Caso %d: %d numero\n",n,count+1);
  printf("%d",a);
  }
  else {
    
   printf("Caso %d: %d numeros\n",n,count+1);
   printf("0");
  for(int i=0;i<=a;i++){
        for(int j=0;j<i;j++){
          printf("% d",i);

        }
     
     }
   } 
    n++;
   printf("\n\n");
 
  }
  return 0;
}

