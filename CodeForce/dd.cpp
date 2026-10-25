#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

using Cost = long long;
using Time = long long;

struct Restaurant {
    Time delivery_time;
    Cost cost_per_bundle[5];
};

bool compareRestaurants(const Restaurant& a, const Restaurant& b) {
    return a.delivery_time < b.delivery_time;
}

void solve() {
    int N;
    if (!(cin >> N)) return;

    vector<vector<int>> bundles(5, vector<int>(4));
    for (int j = 0; j < 5; ++j) {
        for (int k = 0; k < 4; ++k) {
            cin >> bundles[j][k];
            bundles[j][k]--;
        }
    }

    vector<Restaurant> restaurants(N);
    for (int i = 0; i < N; ++i) {
        Time T;
        cin >> T;
        restaurants[i].delivery_time = T;

        vector<Cost> prices(20);
        for (int p = 0; p < 20; ++p) {
            cin >> prices[p];
        }

        for (int j = 0; j < 5; ++j) {
            Cost bundle_cost = 0;
            for (int item_index : bundles[j]) {
                bundle_cost += prices[item_index];
            }
            restaurants[i].cost_per_bundle[j] = bundle_cost;
        }
    }

    sort(restaurants.begin(), restaurants.end(), compareRestaurants);

    Cost min_total_cost = LLONG_MAX;

    const Cost LARGE_COST = 5LL * 4LL * 1000000000LL + 1LL;

    Cost min_bundle_cost[5];
    for (int j = 0; j < 5; ++j) {
        min_bundle_cost[j] = LARGE_COST;
    }

    for (int i = 0; i < N; ++i) {
        Restaurant& current_R = restaurants[i];

        Time T_max = current_R.delivery_time;

        for (int j = 0; j < 5; ++j) {
            min_bundle_cost[j] = min(min_bundle_cost[j], current_R.cost_per_bundle[j]);
        }

        Cost current_total_item_cost = 0;
        for (int j = 0; j < 5; ++j) {
            current_total_item_cost += min_bundle_cost[j];
        }

        Cost current_total_cost = current_total_item_cost + T_max;

        min_total_cost = min(min_total_cost, current_total_cost);
    }

    cout << min_total_cost << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }

    return 0;
}
