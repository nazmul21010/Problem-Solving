#include <bits/stdc++.h>
using namespace std;
int main() {
int tt;
cin>>tt;
while(tt--){


    int n, k;
  cin>>n>>k;
    vector<long long> a(n);

    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }

    vector<int> b(k);

    for (int i = 0; i < k; ++i){
        cin >> b[i];
    }


    sort(a.begin(), a.end(), greater<long long>());
    sort(b.begin(), b.end());

    long long total = 0;

    for (int i=0;i<n;i++){
         total += a[i];
    }


    long long saved = 0;
    int pos = 0;

 for (int i = 0; i < k; i++) {
        int x = b[i];


        if (pos + x > n) {

            continue;
        }
        saved += a[pos + x - 1];
        pos += x;
    }

    cout << (total - saved) << "\n";
}
    return 0;
}

