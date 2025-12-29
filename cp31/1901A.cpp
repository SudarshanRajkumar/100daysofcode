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
        ll n,x;
        cin>>n>>x;
        vector<ll>points_num;
        points_num.push_back(0);
        for(int i=0;i<n;i++){
            ll point;cin>>point;
            points_num.push_back(point);
        }
        points_num.push_back(x);
        n=points_num.size();
        ll max_distance_between_points=INT_MIN;
        for(int i=1;i<n;i++)
        {
            if(i==n-1){
            max_distance_between_points=max(max_distance_between_points,2*(points_num[i]-points_num[i-1]));

        }
            else{
                max_distance_between_points=max(max_distance_between_points,points_num[i]-points_num[i-1]);
            }
 }
 cout<<max_distance_between_points<<endl;
}
    
    return 0;
}

