#include <bits/stdc++.h>
using namespace std;

long long  gcdll(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long > arr(n);
        for (auto &x : arr) cin >> x;

        long long  g = arr[0];

        for (int i = 1; i < n; i++) {
            g = gcdll(g, arr[i]);
        }

        long long  ans = -1;
        for (long long  x = 2; x <= 100; x++) {
            if (gcdll(x, g) == 1) {
                ans = x;
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
