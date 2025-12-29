//CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll k,n,w;
    cin>>k>>n>>w;
    ll x = k * w * (w + 1) / 2; 
    if(n>=x){
        cout<<0<<endl;
    }
    else{
        cout<<x-n<<endl;
    }
      
return 0;
}