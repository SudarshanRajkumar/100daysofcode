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