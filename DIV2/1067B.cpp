// CODE BY SUDARSHAN RAJKUMAR___FROM MANIPUR
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> a(2*n);
        unordered_map<int,int> freq;
        freq.reserve(2*n);

        // read & count frequencies
        for (int i = 0; i < 2*n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int odd = 0, even = 0;

        // classify distinct values by parity of total frequency
        for (auto &p : freq) {
            if (p.second % 2 == 0) even++;
            else odd++;
        }

        int ans = 0;

        // Case 1: all odd-frequency values fit
        if (odd <= n) {
            int use_even = min(even, n - odd);
            ans = odd + 2 * use_even;
        }
        else {
            // Case 2: too many odd-frequency values
            int extra = odd - n;
            ans = 2*n - extra;
        }

        cout << ans << "\n";
    }

    return 0;
}
        