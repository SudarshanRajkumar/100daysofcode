//CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   string s;cin>>s;
   for(auto i:s){
    i=tolower(i);
    if(!(i=='a'||i=='o'||i=='y'||i=='e'||i=='u'||i=='i')){
        cout<<"."<<i;}
    } 
    return 0;
}

