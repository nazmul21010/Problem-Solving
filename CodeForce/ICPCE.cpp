#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    int x = 0;
    while (tc--) {
        string str;
        cin >> str;
        x++;

        int c = 0;
        for (int i = 0; i <= str.size() - 3; ) {
            if (str[i] == '^' && str[i + 1] == '_' && str[i + 2] == '^') {
                c++;
                i += 3;
            } else {
                i++;
            }
        }

        cout << "Case " << x << ": " << c << endl;
    }

    return 0;
}
