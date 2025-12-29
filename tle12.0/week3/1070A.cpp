//     //CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
//     #include<bits/stdc++.h>
//     using namespace std;
//     #define ll long long
//     #define endl '\n'
//     int main(){
//         ios::sync_with_stdio(false);
//         cin.tie(nullptr);
//         int t;cin>>t;
//         while(t--){
//             ll n;cin>>n;
//             vector<ll> a(n);
//             for(int i=0;i<n;i++){
//                 cin>>a[i];
//             }
          
//            int count=0;
//             int i=0;
//             while(i<a.size()-1){

            
//             if(a[i]>a[i+1]){
               
//                 a.erase(a.begin()+i+1);
//                 count++;
                
// }
//             else{
//                 i++;
//             }
// }
        
//             cout<<count<<endl;
        
        



    
//         }
//         return 0;   

//         }
        


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
        ll n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        int maximum=a[0];//Prefix sum
        for(int i=1;i<n;i++){
            if(maximum>a[i])
            {
                count++;
            }
            else{
                maximum=a[i];
            }
        }
        cout<<count<<endl;



        
        
    }
    
    return 0;
}
