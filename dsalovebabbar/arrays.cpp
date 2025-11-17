//228.  Shift the elements of array by one position
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to rotate the array 'nums' to the right by 'k' steps
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        // Handle cases when k is greater than n
        k = k % n;

        // Step 1: Store the last k elements in a temporary vector
        vector<int> temp;
        for (int i = n - k; i < n; i++) {
            temp.push_back(nums[i]);
        }

        // Step 2: Shift the remaining elements to the right by k positions
        for (int i = n - 1; i >= 0; i--) {
            if (i - k >= 0) {
                nums[i] = nums[i - k];
            }
        }

        // Step 3: Copy the stored elements from temp to the beginning
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};

int main() {
    // Example usage
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    Solution obj;
    obj.rotate(nums, k);

    // Display the rotated array
    cout << "Rotated array: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
//MatrixDiagonalSum
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();int sum=0;
        for(int i=0;i<n;i++){
            sum+=mat[i][i];//Sum of the first diagonal elements
        }
        for(int i=0;i<n;i++){
            sum+=mat[i][n-i-1];}//Sum of the second diagonal elements
        
        if(n&1){
            sum-=mat[n/2][n/2];//If we found any odd we subtract it using the formula n/2,n/2 as it a
            //square matrix
        }
        return sum;
    }
    
};

//434. Print Extreme Elements Alternately
#include<algorithm>
class Solution { 
public: 
    vector<int>printExtremeElementsAlternately(vector<int>& arr) { 
        vector<int>ans;
        sort(arr.begin(),arr.end());
        bool PickElement=true;
        int l=0,r=arr.size()-1;
        while(l<=r){
            if(PickElement){
                ans.push_back(arr[l++]);
                PickElement=false;

            }
            else{
                ans.push_back(arr[r--]);
                PickElement=true;
        }
        }
        return ans;
        


}
};  