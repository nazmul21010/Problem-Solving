#include<bits/stdc++.h>
using namespace std;

int main(){


int tc;
cin>>tc;

while(tc--)
{

    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>v;

    for(int i=0;i<s.size();i++){

        if(s[i]=='0'){
            v.push_back(i+1);
        }
    }

    cout<<v.size()<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    v.clear();

}
return 0;
}
