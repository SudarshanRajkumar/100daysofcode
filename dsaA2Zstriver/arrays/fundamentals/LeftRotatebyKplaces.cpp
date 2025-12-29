/*
#include<bits/stdc++.h>
using namespace std;
int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        vector<int>nums={1,2,3,4,5,6,7};
        int d=3;int n=7;
        d=d%n;
        int temp[d];
        for(int i=0;i<d;i++){
            temp[i]=nums[i];
        }
        for(int i=d;i<n;i++){
            nums[i-d]=nums[i];

        }
        for(int i=n-d;i<n;i++){
            nums[i]=temp[i-(n-d)];
        }
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
        return 0;
}//Time complexity is O(n+d)

*/

//MORE EFFICIENT CODE
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>v={1,2,3,4,5,6,7};
    int d=3;int n=v.size();
    reverse(v.begin(),v.begin()+d);
    reverse(v.begin()+d,v.begin()+n);
    reverse(v.begin(),v.end());
    for(auto i:v){//ITERATES OVER VALUES NOT INDEXES
        cout<<i<<" ";
    }

    return 0;
}

//TIME COMPLEXITY:0(2N);
//SPACE COMPLEXITY IS 0(1);
