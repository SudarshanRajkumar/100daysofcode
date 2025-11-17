#include<bits/stdc++.h>
using namespace std;
#define ll long long
    int main(){
        int t;cin>>t;
        while(t--){
            ll n;cin>>n;
            int mod=1e9+7;
            ll ans=((n%mod)*(n%mod))%mod;
            cout<<ans<<"\n";
           
        }
        return 0;
    }