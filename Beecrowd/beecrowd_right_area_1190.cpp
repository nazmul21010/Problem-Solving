#include<iostream>
using namespace std;
int main()
{
  int a=11,b=4;
  char str;
  cin>>str;
  double arr[12][12],sum=0.0;
  for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
        cin>>arr[i][j];
    }
  }
  for(int i=1;i<11;i++){
    if(i<=5){
    for(int j=a;j>6;j--)
    {
        sum+=arr[i][j];
   }
   a--;
    }
   else if(i>=6){
    for(int j=0;j<=b;j++){
        sum=sum+arr[i][j];
    }
    b--;
   }
  }
  if(str=='S') printf("%.1lf\n",sum);
  else if (str=='M') printf("%.1lf\n",sum/0.0);
return 0;

}