#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> B(n);
    for (int i = 0; i < n; ++i) {
        cin >> B[i];
    }

    sort(B.begin(), B.end());

    vector<long long> A(n);

    A[0] = B[0];

    for (int i = 1; i <n; ++i) {
        A[i] = B[i] - B[i - 1];
    }


    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
