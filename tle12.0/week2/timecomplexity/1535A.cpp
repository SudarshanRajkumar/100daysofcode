#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        
        // largest and second largest among all four
        ll mx1 = max({a, b, c, d});
        ll mx2;
        if (mx1 == a)mx2 = max({b, c, d});
        else if(mx1 == b) mx2 = max({a, c, d}); 
        else if(mx1 == c) mx2 = max({a, b, d});
        else mx2 = max({a, b, c});
        ll w1 = max(a, b);
        ll w2 = max(c, d);
// order them so wm1 >= wm2
        ll wm1, wm2;
        if (w1 >= w2) { wm1 = w1; wm2 = w2; }
        else { wm1 = w2; wm2 = w1; }
        
        if (wm1 == mx1 && wm2 == mx2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
