#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
        ll n,m;cin>>m>>n;
        ll ans=0;
        for(ll a=0;a*a<=n;a++){
            for(ll b=0;b*b<=m;b++){
                if(((a*a+b)==n)&&((a+b*b)==m)){
                    ans++;
                }
            }
        }
cout<<ans;
return 0;
}