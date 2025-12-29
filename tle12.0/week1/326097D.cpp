//CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll T;cin>>T;
    while(T--){
        ll l,r;
        cin>>l>>r;
        if(l>r){swap(l,r);}
        ll fr = r * 111 + (r * (r + 1)) / 2;

        ll x = l - 1;
        ll fl = x * 111 + (x * (x + 1)) / 2;
        cout << fr - fl << "\n";

    }
    
    return 0;
}