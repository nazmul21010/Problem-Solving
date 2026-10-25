#include<stdio.h>
int main()
{
 
int a;
scanf("%d",&a);
while(a--){
    int b,c,d;
    scanf("%d%d%d",&b,&c,&d);
    
    if(b+c>=10 || c+d>=10 || b+d>=10 ||d+c>=10 )
 printf("YES\n");
else
printf("NO\n");
 
}
return 0;
}