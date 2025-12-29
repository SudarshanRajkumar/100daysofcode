    //CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define endl '\n'
    int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll X;cin>>X;
        for(int i=2;i*i<=X;i++){
            if(X%i!=0)
                cout<<"YES"<<endl;
                break;
            else
                cout<<"NO"<<endl; 
                break;
    }  
        
        return 0;
    }