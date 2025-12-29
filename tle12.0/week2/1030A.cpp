//CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;cin>>n;int count_of_1=0;
    for(int i=0;i<n;i++){
        ll N;cin>>N;
        count_of_1+=(N==1);
   }
   if(count_of_1>0){
    cout<<"HARD";
   }
   else{
    cout<<"EASY";
   }
    
    return 0;
}