#include<bits/stdc++.h>
using namespace std;
int main(){

pair<int,int>p;

int tc,x,y;
cin>>tc;
for(int i=0;i<tc;i++){

    cin>>x>>y;
    p=make_pair(x,y);
}

for (int i=0;i<tc;i++){
    cout<<p.first<<p.second<<endl;
}
    return 0;
}
