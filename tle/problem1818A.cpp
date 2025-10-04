
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ans = 1;
    for (int i = 1; i < n; i++) {
        ans += (v[0] == v[i]);
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// #define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
// #define all(x) (x).begin(), (x).end()

// void solve() {
//     int n, k;
//     cin >> n >> k;
//     vector<string> v(n);
//     for (auto &s : v) cin >> s;
//     int ans = count(all(v), v[0]);
//     cout << ans << '\n';
// }

// int main() {
//     fastio
//     int T; cin >> T;
//     while (T--) solve();
// }

// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n, k;
//     cin >> n >> k;
//     vector<string> v(n);
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     int ans = 1;
//     for (int i = 1; i < n; i++) {
//         ans += (v[0] == v[i]);
//     }

//     cout << ans << "\n";
// }

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         solve();
//     }
//     return 0;
// }
