#include<bits/stdc++.h>
using namespace std;
int main(){

 pair<int,int>p1,p2;

p1={2,3};
p2={3,1};

pair<int,int> p=min(p1,p2);
cout<<p.first<<" "<<p.second<<endl;

return 0;
}
