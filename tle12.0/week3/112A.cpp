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
    for(int i=0;i<s.size();i++){
        if((s[i]>='A') && (s[i]<='Z')){
            s[i]+=32;
        }
    }
    
    for(int i=0;i<s.size();i++){
        t[i]=tolower(t[i]);
    }
    if(s==t){
        cout<<0<<endl;
    }
    else if(s<t){
        cout<<-1<<endl;
    }
    else{
        cout<<1<<endl;
    }       
    return 0;
}       