#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];


        unordered_map<int,int> freq;
        for(int x : a) freq[x]++;

        vector<int> counts;
        for(auto &p : freq) counts.push_back(p.second);

        int max_freq = *max_element(counts.begin(), counts.end());
        int max_len = 0;


        for(int k = 1; k <= max_freq; k++) {
            int count_valid = 0;
            for(int c : counts) {
                if(c >= k) count_valid++;
            }
            int current_len = count_valid * k;
            max_len = max(max_len, current_len);
        }

        cout << max_len << endl;
    }

    return 0;
}
