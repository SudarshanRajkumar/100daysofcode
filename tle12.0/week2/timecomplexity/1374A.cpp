#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;cin>>t;
        while(t--){
            ll x,y,n;
            cin>>x>>y>>n;
            ll q=(n-y)/x;//k%x==y i.e y is remainder
            ll k=x*q+y;//Remainder theorem:k=x*q+y //Dividend=Div*Quotient +Rem
            cout<<k<<endl;
                   }
    return 0;//Time complexity is 0(1);Direct formula used 
}