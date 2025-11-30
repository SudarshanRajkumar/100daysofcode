//CODE BY SUDARSHAN RAJKUMAR_FROM MANIPUR
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
    int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;cin>>t;
        while(n--){
            string s;cin>>s;
            int n=s.length();
            if(n>10){
                cout<<s[0]<<n-2<<s[n-1]<<endl; }
            else{
                cout<<s<<endl;        }
            }
        return 0;

    }