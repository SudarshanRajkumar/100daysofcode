#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int stk=0;string s;cin>>s;
        for(int x=0;x<s.size();x++){
            if (stk && s[x] == 'B')//same as if(stk!=0 && s[x]=='B')
                stk--;
            else
                stk++;
        }
        cout<<stk<<endl;

    }

    return 0;
}