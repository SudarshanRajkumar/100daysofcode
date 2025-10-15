// #include<iostream>
// using namespace std;
// void printArray(int arr[],int size){
//     for(int i=0;i<10;i++)
//     {
//         cout<<arr[10]<<" ";
//     }
//     cout<<endl;

// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     printArray(arr,10);
//     return 0;
// }
// void printArray(int arr[],int size){
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     printArray(arr,5);
//     return 0;
// }
// void printArray(int arr[],int size){
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

// }
// int main(){
//     int arr[5]={10,20};
//     printArray(arr,5);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void printtwice(int arr[], int size);
// void printArray(int arr[],int size){
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }}
//     //cout<<endl;
// int main(){
//     int arr[10]={11,12,13,14,15};
//     int size=5;
//     //printArray(arr,size);
//     printtwice(arr,size);
//     return 0;   
    
// }
// //function to print twice of the original value in array
// void printtwice(int arr[],int size){
//     for(int i=0;i<=size-1;i++){

//         cout<<(2*arr[i])<<" "<<endl;
//     }
// }
//Problem 433 Search for an element in an array
// int searchelementinArray(vector<int>&nums,int target){
//     int size=nums.size();
//     for(int i =0;i<size;i++){
//         int value=nums[i];
//         if(value==target){
//             return i;
//         }
//     }
//     return -1;
// }
//Problem 224.Find the average of array elements;
// class Solution{
// public:
//     double findAverage(const vector<int>&arr){
//         double ans=0;
//         double totalSum=0;
//         double size=arr.size();
//         for (int i=0;i<size;i++)
//         {
//             int value=arr[i];
//             totalSum+=value;
//         }
//         double ans=totalsum/size;
        
//     }

//     return ans;
// };
//432. Multiply Each Element of an Array by 10
// vector<int> multiplyByTen(const vector<int>& arr) {
//     vector<int>arrcopy=arr;
//     int size=arrcopy.size();
//     for(int i=0;i<size;i++){
//         arrcopy[i]*=10;
//     }
//     // Start completing the function
//     return arrcopy;
// }
//435. Find the Maximum Element in an Array
// #include<limits.h>
// class Solution {
// public:
//     int findMaximum(vector<int>& arr) {
//         int size=arr.size();
//         int maxi=INT_MIN;
//         for(int i=0;i<size;i++){
//             maxi=max(maxi,arr[i]);
//         }
//         return maxi;

//         // Your code here
//     }
// };

//436.COUNT THE NUMBER OF ZEROES AND ONES IN THE ARRAY

// class Solution {
// public:
//     std::pair<int, int> countZerosAndOnes(const std::vector<int>& nums) {
//         int totalOnes=0;int totalZeroes=0;
//         int size=nums.size();

//         for(int i =0;i<size;i++){
//             if(nums[i]==0){
//             totalZeroes++;}
//            if(nums[i]==1){
//            totalOnes++;}

            
//         }
//         //return pair
//      return{totalZeroes,totalOnes};//
//or u can use this step instead of return total zeroes and ones ,i.e.;
// pair<int,int>ans;
// ans.first=totalZeroes;
// ans.second=totalOnes;
// return ans;}
// };
//     }
// };

//7th OCTOBER
//REVERSE AN ARRAY;
/*#include <algorithm> // Include this for std::reverse

class Solution {
public:
    vector<int> reverseArray(const vector<int>& arr) {
        vector<int> num = arr; // Copy the original array
        std::reverse(num.begin(), num.end()); // Reverse the copied array
        return num;
    }
};  */
//437. Find the Unique Element in an Array
 /*class Solution {
    public:
        int findUniqueElement(vector<int>& nums){   
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
        ans^=nums[i];}
        return ans;
        
        };*/
//439. Sort an Array of 0s and 1s
    // class Solution {
    // public:
    //     vector<int> sortArray(vector<int>& nums) {
    //         // Implement the function here.
    //         int countones=0;
    //         int countzeroes=0;
    //         int n=nums.size();
    //         vector<int>arr=nums;
    //         for(int i=0;i<n;i++){
    //             if(nums[i]==0){
    //                 countzeroes++;
    //             }
    //             if(nums[i]==1){
    //                 countones++;
    //             }

    //         }
    //         fill(arr.begin(),arr.begin()+countzeroes,0);
    //         fill(arr.begin()+countzeroes,arr.end(),1);
    //         return arr;
    //     }
    // };
        