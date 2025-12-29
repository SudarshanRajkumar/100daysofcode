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
        ll n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
       
        ll operations=INT_MAX;
        for(int i=0;i<n-1;i++){
            if(a[i]<=a[i+1]){
               ll req_operations=((a[i+1]-a[i])/2)+1;
                operations=min(operations,req_operations);

            }
            else{
                 operations=0;
            }
        }
        cout<<operations<<endl;



        
        
    }
    
    return 0;
}   