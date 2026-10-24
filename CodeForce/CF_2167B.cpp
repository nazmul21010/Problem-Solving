#include<bits/stdc++.h>
using namespace std;
int main()
{

    int tc;
    cin>>tc;
    while(tc--)
    {

       int n;
       cin>>n;
       string s,s2;
       cin>>s>>s2;

       sort(s.begin(), s.end());
       sort(s2.begin(), s2.end());

       if(s==s2){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }

    }


    return 0;
}
