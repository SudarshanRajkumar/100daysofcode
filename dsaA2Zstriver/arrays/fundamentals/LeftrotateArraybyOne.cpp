#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll>nums={1,3,4,5,6};
    int n=nums.size();
    int temp=nums[0];
    for(int i=1;i<n;i++){
        nums[i-1]=nums[i];
    }
    nums[n-1]=temp;
    for(int i =0;i<n;i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}

