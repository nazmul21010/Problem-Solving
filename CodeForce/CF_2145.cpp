#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;

        string str;
        cin >> str;

        sort(str.begin(), str.end());

        int c = count(str.begin(), str.end(), '0');
        int d = count(str.begin(), str.end(), '1');
        int x = count(str.begin(), str.end(), '2');

        vector<char> s(n, '+');


       for(int i=0;i<n;i++){

        if(i<c||i>n-d){


         s[i]='-';
        }

       else if(i==c||i==n-d){
        s[i]='?';
       }
    }

    for(int i=0;i<n;i++){
        cout<<s[i];
    }
       cout<<endl;
    }
    return 0;
}
