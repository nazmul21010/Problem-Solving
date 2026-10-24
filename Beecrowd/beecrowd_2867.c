#include<stdio.h>
#include<math.h>
int main()
{

int m;scanf("%d",&m);
for(int i=0;i<m;i++){
int a,b;

scanf("%d %d",&a,&b);
int m=b*log10(a)+1;
printf("%d\n",m);
}
return 0;
}