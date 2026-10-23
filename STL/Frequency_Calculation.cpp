#include<bits/stdc++.h>
using namespace std;
int ctn[100225];


int main(){

int size;
cin>>size;


vector<int>v(size+1);

for(int i=0;i<size;i++)
{

    cin>>v[i];
}


for(auto u:v){
    ctn[u]++;
}

for(int i=0;i<size;i++){
    cout<<ctn[i]<<" ";
}

return 0;
}
