#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[26];
    char b[26];
    cin>>a>>b;

if(strcmp(a,b)==0)
{
    cout<<a<<endl;
    cout<<b<<endl;
}

else if(strcmp(a,b)>0)
{
    cout<<b<<endl;
    cout<<a<<endl;
}
else if(strcmp(a,b)<0)
{
    cout<<a<<endl;
    cout<<b<<endl;
}

return 0;
}