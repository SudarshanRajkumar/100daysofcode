//CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<abs(sum)<<endl;
    

    
    
    return 0;
}