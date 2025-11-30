//CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;cin>>s;
    string r;
    for(int i=0;i<s.size();i+=2){
        r+=s[i];
    }
    sort(r.begin(),r.end());
    for(int i=0;i<r.size()-1;i++){
        cout<<r[i]<<"+";
        
    }
    cout<<r.back()<<endl;
    return 0;
} */

    /*       |||||||OR|||||||   */

//CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    int c1=0,c2=0,c3=0;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;cin>>s;
    string t;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')c1++;
        if(s[i]=='2')c2++;
        if(s[i]=='3')c3++;
    }
    for(int i=0;i<c1;i++){
        t+="1+";
    }
     for(int i=0;i<c2;i++){
        t+="2+";
    }
     for(int i=0;i<c3;i++){
        t+="3+";
    }
    t.pop_back();
    cout<<t<<endl;

        
//TIME COMPLEXITY IS O(N);
    
    return 0;
}
