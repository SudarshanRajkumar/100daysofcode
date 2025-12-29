//CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int n;cin>>n;
    vector<ll>arr(n);for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans=0;
    for(ll i=1;i<n;i++){
        if(arr[i]>=arr[i-1])continue;
        else{
            ans+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }
    cout<<ans<<endl;
    return 0;
}