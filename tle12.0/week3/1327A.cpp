#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        if(n%2==0){//n is even
            if(k*k>n || k%2==1){//odd case
             cout<<"NO"<<endl;}
        
            else{
             cout<<"YES"<<endl;
            }
        }
        else{
            if(k*k>n || k%2==0){//even case
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        

}

    return 0;
}     

