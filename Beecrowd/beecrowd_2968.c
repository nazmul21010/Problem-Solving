#include<stdio.h>
#include<math.h>
int main()
{
  double a,b,sum;
  scanf("%lf%lf",&a,&b);
  for(double i=10.0;i<=90.0;i=i+10.0){

   sum=((a*b*i)/100.0);
   if(i==90.0){
    printf("%.0lf\n",ceil(sum));
   }
   else{
   printf("%.0lf ",ceil(sum));

   }
   sum=0;
  }
return 0;
}
