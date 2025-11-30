//CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;cin>>s;
    string t;cin>>t;
    reverse(s.begin(),s.end());
    cout<<((s==t)?"YES":"NO")<<endl;
    return 0;
}