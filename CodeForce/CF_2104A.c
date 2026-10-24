#include<stdio.h>
int main(){

int tt;
scanf("%d",&tt);
while(tt--){

int a,b,c,x;
scanf("%d%d%d",&a,&b,&c);
x=(a+b+c)/3;

if((x%3)==0){ printf("YES\n");}
else if(b<=x){printf("%d%d",b,x);}

else if((x%3)!=0){printf("NO\n");}
else{printf("NO\n");}
}
return 0;
}
