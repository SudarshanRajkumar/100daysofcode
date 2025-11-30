//CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;cin>>s;
    if(s[0]>='a'&&s[0]<='z')
        s[0]-=32;
    
    cout<<s<<endl;
    return 0;
}