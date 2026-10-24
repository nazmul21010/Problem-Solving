#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
 
 int a,b,c,p,n;
 cin>>a;
 cin>>b;
 cin>>c;
int sum=a+b+c;
 
if(sum<24 && sum>0){
cout<<sum<<endl;
}
else if(sum>=24 ){
    p=abs(24-sum);
cout<<p<<endl;
}
else if(sum<0){
 n=24+(sum);
cout<<n<<endl;
}
else cout<<"0"<<endl;
return 0;
}