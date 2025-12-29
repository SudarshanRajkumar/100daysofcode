    //CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define endl '\n'
    int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int a;
        char c;int b;
        bool ans;
        cin>>a>>c>>b;
        if(c=='<'){
            if(a<b){
                ans=true;
            }
            else{
                ans=false;
            }
        }
        else if(c=='>'){
                if(a>b){
                    ans=true;
                }
                else{
                    ans=false;  
                }
            }
        else{
                if(a==b){
                    ans=true;
                }
                else{
                    ans=false;  
                }
            }
        if(ans){
            cout<<"Right"<<endl;
        }
        else{
            cout<<"Wrong"<<endl;
        }
    
        return 0;
    }