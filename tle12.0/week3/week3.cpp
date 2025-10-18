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
#include<bits/stdc++.h>
int main()
using namespace std;
