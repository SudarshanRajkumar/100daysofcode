//CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x;cin>>x;
    if(x%5==0){
        cout<<x/5<<endl;
    }
    else{
        cout<<(x/5)+1<<endl;
    }
    return 0;
}