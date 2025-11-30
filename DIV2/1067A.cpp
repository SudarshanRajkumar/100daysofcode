#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll y;
        ll r;
        cin>>y>>r;
        ll susp=(y/2)+r;
        cout<<min(n,susp)<<endl;      
    }
    
    return 0;
}