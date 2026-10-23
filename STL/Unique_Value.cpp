#include<bits/stdc++.h>
using namespace std;
int main(){

vector<int>v={7,2,7,3,5,1,3,9};
sort(v.begin(),v.end());
cout<<"Enter Sorting Vector :"<<endl;
for(auto u:v){
    cout<<u<<" ";
}

int size=unique(v.begin(),v.end())-v.begin();

cout<<endl<<"Unique Array : "<<size<<endl;

for(int i=0;i<size;i++){
    cout<<v[i]<<" ";
}
vector<int>::iterator it=max_element(v.begin(),v.end()-3);

cout<<endl<<*it<<endl;
}
