#include<bits/stdc++.h>
using namespace std;
int main(){

 pair<int,int>p1,p2;

p1={2,3};
p2={3,1};

if(p1<p2)
{
    cout<<p2.first<<" "<<p1.first<<endl;
    cout<<"YES"<<endl;
}
return 0;
}
