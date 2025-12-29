//CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){//o(n)
        cin>>a[i];//inputting array
    }
    ll min_operations=INT_MAX;//to find minimum ,we assign maximum
    for(int i=0;i<n;i++){//o(n)
        min_operations=min(min_operations,abs(a[i]));//absolute value of every element
    }
    cout<<min_operations<<endl;    
    return 0;
}
//TC:-o(n)
//SC:-o(n)for inputting array elements