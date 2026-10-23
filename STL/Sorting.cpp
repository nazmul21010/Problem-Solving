
#include<bits/stdc++.h>
using namespace std;
int main(){

vector<int>v={4,8,14,0,1,7,3,9,10};

sort(v.begin(),v.end());

cout<<"All Element sorted Asending : "<<endl;

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

cout<<endl<<"All Element sorted Desending : "<<endl;
sort(v.begin(),v.end(),greater<int>());

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

cout<<endl<<"All Element sorted Some Element Asending : "<<endl;

sort(v.begin()+2,v.end()-2);

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}


cout<<endl<<"All Element sorted Some Element Desending : "<<endl;

sort(v.begin()+2,v.end()-2,greater<int>());

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

return 0;
}

