//CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a,b;
    cin>>a>>b;
    if((a%b==0)||(b%a==0)){
        cout<<"Multiples";
    }
    else{
        cout<<"No Multiples";
    }
    
    return 0;
}