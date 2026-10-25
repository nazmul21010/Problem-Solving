#include <bits/stdc++.h>
using namespace std;
long long ans() {

    int n;
    if (!(cin >> n)){
        return 0;
    }
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<int> b_prime;
    int left = 0;
    int right = n - 1;

    while (left <= right) {

        b_prime.push_back(a[left]);
        left++;

        if (left <= right) {
            b_prime.push_back(a[right]);
            right--;
        }
    }
    long long max_sum = 0;

    for (int i = 0; i < n - 1; ++i) {
        max_sum += abs(b_prime[i] - b_prime[i + 1]);
    }
    max_sum += abs(b_prime[n - 1] - b_prime[0]);
    return max_sum;
}
int main() {

    int tc;
    if (!(cin >> tc)) return 0;

    while (tc--) {
        cout << ans() <<endl;
    }
    return 0;
}
