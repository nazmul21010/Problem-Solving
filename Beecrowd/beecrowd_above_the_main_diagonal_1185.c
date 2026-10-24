#include<stdio.h>
#include<string.h>
int main()
{
    float arr[12][12],sum=0.0;char str[2];
   int a=11;
   scanf("%s",&str);
    for(int i=0;i<12;i++){
  for(int j=0;j<12;j++){
  scanf("%f",&arr[i][j]);
    }
    }
    for(int i=0;i<11;i++){
        for(int j=0;j<a;j++){
      sum+=arr[i][j];
    }
  a--;
    }
    if(str[0]=='S') printf("%.1f\n",sum);
  
  else if (str[0]=='M') printf("%.1f\n",(sum/66.0));
    return 0;

}