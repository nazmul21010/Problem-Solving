#include<stdio.h>
int main()
{
    int a=10;int b=1;
    char str;
    scanf("%c",&str);
    double arr[12][12],sum=0.0;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf",&arr[i][j]);
        }
    }
    for(int i=11;i>6;i--){
        for(int j=b;j<=a;j++){
            sum=sum+arr[i][j];
    }
    a--;
    b++;
}
 if(str=='S') printf("%.1lf\n",sum);
 else if (str=='M') printf("%.1lf\n",sum/30.0);
 return 0;

}