#include<stdio.h>
int main()
{
    int a=11,b=1;
    double arr[12][12],sum=0.0;
    char str;
    scanf("%c",&str);
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf",&arr[i][j]);
        }
    }
    for(int i=0;i<5;i++){
        for(int j=b;j<a;j++){
            sum+=arr[i][j];

        }
        a--;
        b++;
    }
    if(str=='S') printf("%.1lf\n",sum);
    else if(str=='M') printf("%.1lf\n",sum/30.0);
    return 0;
}