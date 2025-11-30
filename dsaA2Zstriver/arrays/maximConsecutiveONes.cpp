#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>nums={0,0,1,1,1,0,0};
    int n=nums.size();
    int maxi=0;int count=0;
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            count++;
            maxi=max(maxi,count);
        }
        else{
            count=0;
        }
    }
    cout<<maxi<<"is the maximum"<<endl;

    return 0;
}
