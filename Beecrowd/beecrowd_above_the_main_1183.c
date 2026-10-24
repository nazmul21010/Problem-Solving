#include<stdio.h>
int main()
{
    int a=1;
    char str[2];
    scanf("%s",&str);
    double arr[12][12],sum=0.0;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf",&arr[i][j]);
        }
    }
 for(int i=0;i<11;i++){
    for(int j=a;j<12;j++){
        sum+=arr[i][j];
 }
 a++;
 }
 if(str[0]=='S') printf("%.1lf\n",sum);
else if (str[0]=='M') printf("%.1lf\n",sum/66.0);
}