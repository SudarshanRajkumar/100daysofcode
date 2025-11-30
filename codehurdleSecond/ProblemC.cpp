#include <bits/stdc++.h>
using namespace std;//We are using a hashing (frequency counting) technique to store how many times each character appears.
//Then we check whether each frequency is a power of 2.
//If it is, we print that character once in alphabetical order.

bool isPowerOf2(int x) {
    return x > 0 && (x & (x - 1)) == 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
    string s;
    cin >> s;

    vector<int> freq(26, 0);

    // Count frequency
    for(char c : s) {
        freq[c - 'a']++;
    }

    // Print valid characters in alphabetical order
    for(int i = 0; i < 26; i++) {
        if(isPowerOf2(freq[i])) {
            cout << char(i + 'a');
        }
    }
    
    cout << '\n';  }
    
    return 0;
}
