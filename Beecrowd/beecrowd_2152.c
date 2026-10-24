#include<stdio.h>
int main()
{
    int a,H,M,S;
    scanf("%d",&a);
    for(int i=0;i<a;i++){

     scanf("%d%d%d",&H,&M,&S);
     if(S==1)
     printf("%.2d:%.2d - A porta abriu!\n",H,M);
  else printf("%.2d:%.2d - A porta fechou!\n",H,M);


    }
return 0;
}