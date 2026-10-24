#include<bits/stdc++.h>
using namespace std;

int main(){
int tc;
cin>>tc;
int arr[tc];

for(int i=0;i<tc;i++){

    cin>>arr[i];
}

for(int i=0;i<tc;i++){

    string str=to_string(arr[i]);
    sort(str.begin(),str.end());
    cout<<str[0]<<endl;
}
return 0;
}
