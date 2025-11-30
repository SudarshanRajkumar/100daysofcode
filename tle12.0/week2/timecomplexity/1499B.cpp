#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int i= s.find("11");//to find first occurence/stl function for string
        int j=s.rfind("00");//to find last occurence in string /stl function
        cout<<(i!=-1 && j!=-1 && i<j? "NO":"YES")<<endl;//if 11 is found before 00,print NO
                                                            //otherwise print "YES";
    }

    return 0;
}