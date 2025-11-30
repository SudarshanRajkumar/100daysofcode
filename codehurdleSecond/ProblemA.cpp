#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;while(t--){
    int a,b;
    cin>>a>>b;
    a=b-a;
    if(a==1){
        cout<<-1<<endl;
    }
    else if(a%3==0){
        cout<<(a/3)<<endl;
    }
    else if(a%3==1){

        cout<<(a/3)+1<<endl;
    }
    else{ cout<<(a/3)+1<<endl;}



    }
    
    return 0;
}