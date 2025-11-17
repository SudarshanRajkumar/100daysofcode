    #include<bits/stdc++.h>
    using namespace std;
    //NUMBER HASHING 
        /* int main(){
            int n;cin>>n;
            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }

            // -----------------------------
            // Hashing Concept:
            // Precompute: Count frequency → hash[arr[i]]++
            // Query: Directly access count → hash[number]
            // -----------------------------

            // Create a hash array to store frequency (count) of numbers.
            // Here, size 13 means we can count numbers from 0 to 12.
            int hash[13]={0};

            // Count how many times each number appears in arr[]
            for(int i=0;i<n;i++){
                hash[arr[i]] += 1;   // increase count for that number
            }

            // -----------------------------
            // Fetch Queries
            // -----------------------------
            int q;cin>>q;
            while(q--){
                int number;
                cin>>number;
                // Print how many times 'number' appeared in the array
                cout<<hash[number]<<endl;
            }

        return 0;
    }*/
    //CHARACTER HASHING
    
// int main(){
//     string s; cin >> s;

//     // -----------------------------
//     // Hashing Concept:
//     // Precompute: Count frequency → hash[s[i]-'a']++
//     // Query: Directly access count → hash[c-'a']
//     // -----------------------------

//     // Precompute: store frequency of each character (a–z)
//     int hash[26] = {0};
//     for(int i = 0; i < s.size(); i++){
//         hash[s[i] - 'a']++;
//     }

//     // Fetch queries
//     int q; cin >> q;
//     while(q--){
//         char c; cin >> c;
//         // Print how many times 'c' appeared in the string
//         cout << hash[c - 'a'] << endl;
//     }

//     return 0;
// }
/*
int main() {
    string s; 
    cin >> s;

    // -----------------------------
    // HASHING CONCEPT (For all ASCII characters)
    // Precompute: Count frequency → hash[(unsigned char)s[i]]++
    // Query: Directly access count → hash[(unsigned char)c]
    // -----------------------------

    // Precompute: store frequency of each ASCII character (0–255)
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[(unsigned char)s[i]]++;  // safe for all characters
    }

    // Fetch queries
    int q; 
    cin >> q;
    while (q--) {
        char c; 
        cin >> c;
        // Print how many times 'c' appeared in the string
        cout << hash[(unsigned char)c] << endl;
    }

    return 0;
}
*/
//STL-Map in Hashing

/*int main(){
    int n;
    cin>>n;  // Input size of array

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];  // Input array elements
    }

    // -----------------------------
    // Precompute Step:
    // Store frequency of each element using map
    // Key -> element, Value -> frequency
    // -----------------------------
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;  // Increment count of each element
    }

    // -----------------------------
    // Display the frequency map
    // -----------------------------
    for(auto it:mpp){
        cout<<it.first<<" -> "<<it.second<<endl;  // Print element and its frequency
    }

    int q;
    cin>>q;  // Number of queries

    // -----------------------------
    // Query Step:
    // For each query, print frequency of given number
    // -----------------------------
    while(q--){
        int number;
        cin>>number;  // Input query number

        // Fetch and print frequency from map
        cout<<mpp[number]<<endl;
    }

    return 0;
}*/
//HIGHEST OCCURENCE ELEMENT IN AN ARRAY

//BRUTE FORCE 

/* class Solution {
public:
    // Function to get the highest occurring element in array nums
    int mostFrequentElement(vector<int> &nums) {
        
        int n = nums.size();           // Size of the array
        int maxFreq = 0;               // Stores maximum frequency found so far
        int maxEle;                    // Stores element with maximum frequency
        
        vector<bool> visited(n, false); // Keeps track of visited elements
        
        // Outer loop → pick each element one by one
        for (int i = 0; i < n; i++) {
            
            // Skip if this element was already counted
            if (visited[i]) continue;
            
            int freq = 0;  // To count frequency of current element
            
            // Inner loop → count how many times nums[i] appears
            for (int j = i; j < n; j++) {
                if (nums[i] == nums[j]) {
                    freq++;
                    visited[j] = true;  // Mark as visited
                }
            }
            
            // If this element has a higher frequency → update max
            if (freq > maxFreq) {
                maxFreq = freq;
                maxEle = nums[i];
            }
            // If frequencies are equal → choose smaller element
            else if (freq == maxFreq) {
                maxEle = min(maxEle, nums[i]);
            }
        }
        
        // Return the element with highest frequency
        return maxEle;
    }
};

/*
---------------------------------------------
Time Complexity  : O(n^2)
   → Two nested loops (each up to size n)

Space Complexity : O(n)
   → Extra visited[] array of size n

If n ≤ 10^4, then space used ≈ O(10^4 + 1)
---------------------------------------------
*/


//optimized solution


class Solution {
public:
    int mostFrequentElement(vector<int> &nums) {
        int n = nums.size();
        int maxFreq = 0, maxEle;

        unordered_map<int, int> mpp;  // stores frequency (O(1) average)

        // count frequency
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }

        // find element with highest frequency
        for (auto it : mpp) {
            if (it.second > maxFreq) {
                maxFreq = it.second;
                maxEle = it.first;
            }
            else if (it.second == maxFreq) {
                maxEle = min(maxEle, it.first);
            }
        }

        return maxEle;
    }
}; 
int main() {
    int n;
    cin >> n;                  // input array size
    vector<int> nums(n);

    for (int i = 0; i < n; i++) 
        cin >> nums[i];        // input array elements

    Solution obj;
    cout << obj.mostFrequentElement(nums);  // output result
    return 0;
}








