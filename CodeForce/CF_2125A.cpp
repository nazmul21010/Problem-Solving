#include<bits/stdc++.h>
using namespace std;
#define e endl
int main(){
int tt;
cin>>tt;
while(tt--)
{
    string s;
    cin>>s;

  sort(s.begin(),s.end(),greater<char>());
   cout<<s<<e;

    }

return 0;
}
