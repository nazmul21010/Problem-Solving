#include<bits/stdc++.h>
using namespace std;
int main()
{

    int tc;
    cin>>tc;
    while(tc--)
    {

        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b && c==d &&a==c){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}
