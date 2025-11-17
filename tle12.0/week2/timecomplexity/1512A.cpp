#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){//t sina test case
        int n;
        cin >> n;
        vector<int> v(3*n,0);//vector 3 times size louba
        for(int i=0;i<n;i++){
            cin>>v[i];
            v[i+n]=v[i+2*n] = v[i];//copies of vector semba 
        }
        for(int i=n ; i<2*n ; ++i){
/*compare touba neighbouring elements manabro and element duga previous element mandabara?*/          
        if( (v[i]!=v[i-1] && v[i-1]==v[i+1]) ){
                cout <<i-n+1 << std::endl;
                break;
            }
        }
    }
return 0;
}
