#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n;cin>>n;
        vector<ll>a(n),b(n);
    
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        for(int i=0;i<n;i++){
            cin>>b[i];

        }
        int flag=0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                flag=1;
                break;
            }
            else{
                flag=0;
            }
        } 
        if(flag)cout<<"no"<<endl;
        else cout<<"yes"<<endl;

        return 0;
}