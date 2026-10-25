#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, H;
    if(!(cin >> n >> H)) return 0;

    vector<long long> a(n);
    long long M = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    vector<long long>::iterator it=max_element(a.begin(),a.end());

    long long total = *it * (*it - 1) / 2;
    if(H > total) cout << "Hablu\n";
    else cout << "Dablu\n";
    return 0;
}
