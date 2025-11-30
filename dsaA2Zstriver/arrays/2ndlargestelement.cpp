//BETTER APPROACH FOR FINDING 2ND LARGEST ELEMENT
/* #include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Method for the second largest element in the vector
    int secondLargestElement(vector<int>& nums) {
        int n = nums.size();

        // Check if the vector has less than 2 elements
        if (n < 2) {

            //  If true, return -1 indicating there 
            // is no second largest element
            return -1; 

        }
        //Initialize variables to store the 
        //largest and second largest elements
        int largest = INT_MIN, secondLargest = INT_MIN;

        // First traversal to find the largest element
        for (int i = 0; i < n; i++) {
            largest = max(largest, nums[i]);
        }

        // Second traversal to find second largest element
        for (int i = 0; i < n; i++) {
            if (nums[i] > secondLargest && nums[i] != largest) {
                secondLargest = nums[i];
            }

        }
        // Return the second largest element
        return secondLargest == INT_MIN ? -1 : secondLargest;
    }
};

int main() {
    vector<int> nums = {1, 2, 4, 6, 7, 5};

    //Create an instance of Solution class
    Solution sol;

    // Call the method to find second largest element
    int result = sol.secondLargestElement(nums);

    cout << "Second largest is " << result << endl;
    return 0;
} */

//OPTIMAL APPROACH:-

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>arr = {1, 2, 4, 7, 7, 8};
    int n=arr.size();int largest=INT_MIN; int secondLargest=INT_MIN;
    for(int i =0;i<n;i++)
     {  if(arr[i]>largest)
        {
            secondLargest=largest;
            largest=arr[i];
        }

    }
    for(int i=0;i<n;i++){
            if((arr[i]<largest)&&(arr[i]>secondLargest)){
                secondLargest=arr[i];


            }
    }
    cout<<secondLargest<<endl;

    return 0;
}