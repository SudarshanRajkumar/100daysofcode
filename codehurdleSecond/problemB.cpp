#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
            int n;cin>>n;
            vector<ll>nums(n);
             for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        ll total = 0; 
         for (int i = 0; i < n; i++) {
            total += nums[i];             

            if (total % 2 == 1) {cout<<1<<" ";
            } else {
                cout << 0<<" ";
            }
        }

        cout << "\n"; 
}
return 0;
}
