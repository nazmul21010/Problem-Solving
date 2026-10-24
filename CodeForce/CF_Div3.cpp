#include<bits/stdc++.h>
using namespace std;
vector<int> xorTransform(int a, int b) {
    if (a == b) return {0};
    if (a < b) return {-1};

    int d = a ^ b;
    vector<int> result;


    for (int i = 31; i >= 0; --i) {
        int mask = 1 << i;
        if (d & mask) {
            if (mask > a) {

                return {-1};
            }
            result.push_back(mask);
        }
    }

    return result;
}

int main(){

int tc;
cin>>tc;
while(tc--){
int a,b;
cin>>a>>b;

vector<int>v=xorTransform(a,b);

cout<<v.size();
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
}
return 0;
}
