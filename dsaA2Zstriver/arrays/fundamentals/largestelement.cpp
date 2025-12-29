//BRUTE FORCE APPROACH
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>nums={3,3,6,1};
    sort(nums.begin(),nums.end());
    int max=nums[nums.size()-1];
    cout<<max<<endl;
     return 0;
}
*/
//OPTIMAL APPROACH

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>nums={3,3,6,1};
    int target=nums[0];
    for (int i : nums) {//here i is the element
    
        if(target<i){
            target=i;
        }
    }
    cout<<target<<endl;

    return 0;

}