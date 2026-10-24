#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve_optimized(int case_num) {
    int N;
    if (!(cin >> N)) return;

    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    if (N == 0) {
        cout << "Case " << case_num << ": Humanity is doomed!\n";
        return;
    }

    vector<long long> P(N);
    long long current_max = 0;

    for (int i = 0; i < N; ++i) {
        P[i] = current_max;
        current_max = max(current_max, A[i]);
    }

    vector<long long> S(N);
    long long current_min = numeric_limits<long long>::max();

    for (int i = N - 1; i >= 0; --i) {
        S[i] = current_min;
        current_min = min(current_min, A[i]);
    }

    int result_pos = -1;
    for (int i = 0; i < N; ++i) {
        bool prefix_condition = (A[i] > P[i]);
        bool suffix_condition = (A[i] < S[i]);

        if (prefix_condition && suffix_condition) {
            result_pos = i + 1;
            break;
        }
    }

    cout << "Case " << case_num << ": ";
    if (result_pos != -1) {
        cout << result_pos << "\n";
    } else {
        cout << "Humanity is doomed!\n";
    }
    cout.flush();
}

int main() {
    fastIO();

    int T;
    if (!(cin >> T)) return 0;

    for (int t = 1; t <= T; ++t) {
        solve_optimized(t);
    }

    return 0;
}
