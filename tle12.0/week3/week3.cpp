// #include <bits/stdc++.h>
// using namespace std;
 
// void solve() {
//     int n, k;
//     cin >> n >> k;
//     vector<string> t(n);
//     int ans = n;
//     for (int i = 0; i < n; i++) {
//         cin >> t[i];
//         if (t[i] != t[0]) {
//             ans--;
//         }
//     }
//     cout << ans << "\n";
// }
 
// int main() {
//     int t; cin >> t;
//     while(t--) solve();
//     return 0;
// }
//1st problem 
//https://codeforces.com/problemset/problem/1777/A
// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int &it : a) cin >> it;

//     int k = 0;
//     int totalOps = 0;

//     for (int i = 0; i < n; i++) {
//         if (i == 0 || a[i - 1] % 2 == a[i] % 2)
//             k++;
//         else {
//             totalOps += k - 1;
//             k = 1;
//         }
//     }

//     totalOps += k - 1; // add remaining segment
//     cout << totalOps << "\n";
// }

// int main() {
//     int Test;
//     cin >> Test;
//     for (int I = 1; I <= Test; I++) {
//         solve();
//     }
// }

//2nd Problem
// #include <iostream>
// using namespace std;

// int main() {
//     int t; 
//     cin >> t; // number of test cases

//     while (t--) {
//         int a, b, c, d;
//         cin >> a >> b >> c >> d; // read stick lengths
        
//         // Check if all sides are equal
//         if (a == b && b == c && c == d)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }

// 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> s(int lim = 1000) {
    vector<bool> f(lim + 1, true);
    vector<ll> p;
    f[0] = f[1] = false;
    for (int i = 2; i * i <= lim; i++) {
        if (f[i]) {
            for (int j = i * i; j <= lim; j += i)
                f[j] = false;
        }
    }
    for (int i = 2; i <= lim; i++)
        if (f[i]) p.push_back(i);
    return p;
}

void g(vector<ll>& p) {
    int n; 
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    for (ll q : p) {
        bool ok = true;
        for (ll x : a) {
            if (x % q != 0) {
                ok = false;
                break;
            }
        }
        if (!ok) {
            cout << q << endl;
            return;
        }
    }
    cout << -1 << endl;
}
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    auto p = s();
    int t; 
    cin >> t;
    while (t--) g(p);
}