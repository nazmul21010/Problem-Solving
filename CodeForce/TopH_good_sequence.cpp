#include<bits/stdc++.h>
using namespace std;

int main(){

int tt;cin>>tt;
int arr[tt];
for(int i=0;i<tt;i++){
  cin>>arr[i];
}

int position=0;
for(int i=0;i<tt;i++){

    for(int j=i+1;j<tt-1;j++){


        if((arr[j]-arr[i])==2){

            position++;
        }
    }

    cout<<position<<endl;
}
return 0;
}
