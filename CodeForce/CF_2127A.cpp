#include<bits/stdc++.h>
using namespace std;

#define e endl
#define r return 0

int mex(vector<int>& arr) {

    unordered_set<int> s(arr.begin(), arr.end());

    int mex = 0;
    while (s.find(mex) != s.end()) {
        ++mex;
    }
    return mex;
}

int main(){

int tc;
cin>>tc;

while(tc--){
    int t;
    cin>>t;
    vector<int>v(t+1);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }

    int max_value=*max_element(v.begin(),v.end());
    int min_value=*min_element(v.begin(),v.end());

   if(mex(v)==max_value-min_value){
    cout<<"YES"<<e<<mex(v);
   }
   else{
    cout<<"NO"<<e;
   }

}
r;
}
