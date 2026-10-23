#include<bits/stdc++.h>
using namespace std;
int main(){

vector<pair<int,int>>v;
int tc;
cout<<"Input Vector size : ";
cin>>tc;
int x,y;
for(int i=0;i<tc;i++){
        cin>>x>>y;
    v.push_back({x,y});
}

sort(v.begin(),v.end());

cout<<"Increasing Order "<<endl;
for(auto u:v){

    cout<<u.first<<" "<<u.second<<endl;
}
cout<<"Decreasing Order "<<endl;

sort(v.rbegin(),v.rend());

for(auto u: v){
        cout<<u.first<<" "<<u.second<<endl;

}
return 0;
}

