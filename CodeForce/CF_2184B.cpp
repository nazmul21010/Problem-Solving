#include<bits/stdc++.h>
using namespace std;
int main(){


int tc;
cin>>tc;
while(tc--){

    int n,m,x,y;
    cin>>n>>m>>x>>y;
    int arr[n];
    int arr2[m];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int j=0;j<m;j++){
        cin>>arr2[j];
    }
    cout<<n+m<<endl;
}
return 0;
}
