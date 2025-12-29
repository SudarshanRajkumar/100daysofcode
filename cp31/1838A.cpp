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
        ll a,b,c;
        cin>>a>>b>>c;
        if(c%2==1){
            if(b>a){
                cout<<"Second"<<endl;
            }
            else{
                cout<<"First"<<endl;
            }
        }

        else{
            if(a>b){
                cout<<"First"<<endl;
            }
            else{
                cout<<"Second"<<endl;
            }
        }


        
        
    }
    
    return 0;
}

// Time Complexity: o(1)
//Space Complexity is: o(1)