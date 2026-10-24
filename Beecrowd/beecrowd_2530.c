#include<stdio.h>
int main(){
int a;



while (scanf("%d",&a)!=EOF)
{
double arr[a];
double arr2[a];
double sum=0.0;
double sum1=0.0;
for(int i=0;i<a;i++)
{
    scanf("%lf%lf",&arr[i],&arr2[i]);
}
for(int i=0;i<a;i++)
{
   sum+=arr[i]*arr2[i];
  sum1+=arr2[i]*100.0;
}
printf("%.4lf\n",(sum/sum1));

}
return 0;
}