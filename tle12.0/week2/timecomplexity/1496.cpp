#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);int t;cin>>t;  
    while(t--){
    int n, k; 
    cin >> n >> k;
    string s; 
    cin >> s;

    int f = 0;
    string ans = "YES";

    for(int i = 0; i < k; i++){
        if(s[i] == s[n - 1 - i])//Compare touba with first string to the last string and 
            continue;//palindrome check touba 
        else {
            ans = "NO";//Not a palindrome haitaray
            f = 1;
            break;
        }
    }

    if(f==1){
        cout << ans << endl;
    }
    else {
        if(2*k<n){//condition for at least one middle element
            cout << "YES" << endl;
        }
        else 
            cout << "NO" << endl;
    }
}
return 0;
}