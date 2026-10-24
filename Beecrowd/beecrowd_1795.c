#include<stdio.h>
#include<math.h>
int main(){
long long int a;
scanf("%lld",&a);
long long int b=pow(3,a);
if(a==0) printf("1\n");
else printf("%lld\n",b);
return 0;
}