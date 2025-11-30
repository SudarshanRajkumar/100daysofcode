#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    // Store {value, original_index}
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    // Sort descending by value
    sort(a.rbegin(), a.rend());

    vector<int> ans(n);
    int ptr = 0;

    // Fill indices 0, k, 2k... with largest elements
    for (int i = 0; i < n; i += k) {
        ans[i] = a[ptr++].second;
    }

    // Fill remaining indices with the rest
    for (int i = 0; i < n; i++) {
        if (i % k != 0) {
            ans[i] = a[ptr++].second;
        }
    }

    // Output results
    for (int i = 0; i < n; i++) {
        cout << ans[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}