#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    string s;cin>>s;
    ll i =0;
    int flag=1;
    ll m =s.size();
    while (i < m){
        if (i+2 < m && s.substr(i, 3) == "144") {
            i += 3;
        }
        else if (i+1 < m && s.substr(i, 2) == "14") {
            i += 2;
        }
        else if (s[i] == '1') {
            i++;
        }
        else {
            flag = 0;
            break;
        }
    }
    if (flag) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}


