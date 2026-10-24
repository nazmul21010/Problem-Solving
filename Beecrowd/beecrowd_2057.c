#include<stdio.h>
#include<math.h>

int main()
{
 
 int a,b,c,p,n;
 scanf("%d%d%d",&a,&b,&c);
int sum=a+b+c;
 
if(sum<24 && sum>0){
printf("%d\n",sum);
}
else if(sum>=24 ){
    p=abs(24-sum);
printf("%d\n",p);
}
else if(sum<0){
 n=24+(sum);
printf("%d\n",n);
}
else{
printf("0\n");
}
return 0;
}