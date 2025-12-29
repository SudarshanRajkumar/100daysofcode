//CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        map<ll,ll>frequency_maps;
        for(int i=0;i<n;i++){
            frequency_maps[a[i]]++;

        }
        if(frequency_maps.size()>=3){
            cout<<"No"<<endl;
        }
        else{
            ll freq_1=frequency_maps.begin()->second;//extracting the smallest element value
            ll freq_2=frequency_maps.rbegin()->second;//extracting the largest element value
            if(freq_1==freq_2)cout<<"Yes"<<endl;
            else if((n%2==1)&&abs(freq_1-freq_2)==1){
            cout<<"Yes"<<endl;}
            else{
                cout<<"No"<<endl;
            }
        }



        
        
    }
    
    return 0;
}