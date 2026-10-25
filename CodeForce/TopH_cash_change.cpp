#include<bits/stdc++.h>
using namespace std;

int main(){

int c[6]={500,100,50,10,5,1};

int n;cin>>n;
vector<int>v;
int i,j;
for(i=0;i<6;i++){

    if(n>=c[i]){
        int temp=n/c[i];
        int x=temp*c[i];
        n=abs(n-x);

        for(j=0;j<temp;j++){
            v.push_back(c[i]);
        }
    }
}


sort(v.begin(),v.end());

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
return 0;
}
