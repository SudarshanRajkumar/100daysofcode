//Hashing technique
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){ ll n; cin>>n;
    vector<ll>f(n+1,0);int ans=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        f[x]++;
    }
    for(int i=0;i<=n;i++){
        if(f[i]>=i){
                ans+=(f[i]-i);
        }
        else
        {
            ans+=f[i];
        }
    }
    cout<<ans<<endl;
    


     }
      return 0;
}   