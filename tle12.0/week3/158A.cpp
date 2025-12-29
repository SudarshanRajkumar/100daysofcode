    //CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define endl '\n'
    int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n,k;
        cin>>n>>k;int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }int count=0;
        for(int i=0;i<n;i++){
            if(a[i]>0 && a[i]>=a[k-1]){
                count++;
            }
            else{
                continue;
            }
        }
        cout<<count<<endl;
        return 0;
    }