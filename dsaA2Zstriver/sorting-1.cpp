#include <bits/stdc++.h>
using namespace std;

// SELECTION SORT
// void selection_sort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int mini = i; // index of minimum element
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[mini]) mini = j;
//         }
//         swap(arr[mini], arr[i]); // place minimum at correct position
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) cin >> arr[i];

//     selection_sort(arr, n);

//     for (int i = 0; i < n; i++) cout << arr[i] << " ";
//     return 0;
// }

// Time Complexity: O(n^2)
// Space Complexity: O(1)


//BUBBLE SORT
//PUSHES THE MAXIMUM TO THE LAST BY ADJACENT SWAPPINGS
// -----------------------------
// BUBBLE SORT ALGORITHM
// -----------------------------
// Repeatedly compare adjacent elements and swap if they are in wrong order.
// After each pass, the largest element moves (bubbles) to the end.

// void bubble_sort(int arr[], int n) {
//     for(int i = n - 1; i >= 0; i--) {
//         
//         for(int j = 0; j <= i - 1; j++) {
//             if(arr[j] > arr[j + 1]) {
//                 // Swap adjacent elements if they are in the wrong order
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }



// -----------------------------
// OPTIMIZED BUBBLE SORT ALGORITHM
// -----------------------------
// Repeatedly compare and swap adjacent elements if they are in wrong order.
// Optimization: Stop early if no swaps occurred in a pass (array already sorted).

// void bubble_sort(int arr[], int n) {
//     for(int i = n - 1; i >= 0; i--) {
//         int didSwap = 0;  // Flag to check if any swap happened in this pass

//         for(int j = 0; j <= i - 1; j++) {
//             if(arr[j] > arr[j + 1]) {
//                 // Swap adjacent elements
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 didSwap = 1;
//             }
//         }

//         if(didSwap == 0) break;  // If no swap happened, array is sorted

//         cout << "runs\n";  // Indicates how many passes the loop executed
//     }
// }

// int main() {
//     int n;
//     cin >> n;  // Input array size

//     int arr[n];
//     for(int i = 0; i < n; i++) cin >> arr[i];  // Input array elements

//     bubble_sort(arr, n);  // Sort the array

//     // Output the sorted array
//     for(int i = 0; i < n; i++) cout << arr[i] << " ";

//     return 0;
// }

// -----------------------------
// BEST CASE (Already Sorted): O(n)
// WORST & AVERAGE CASE: O(n^2)
// SPACE COMPLEXITY: O(1)
// -----------------------------













// int main() {
//     int n;
//     cin >> n;  // Input array size

//     int arr[n];
//     for(int i = 0; i < n; i++) cin >> arr[i];  // Input array elements

//     bubble_sort(arr, n);  // Sort the array using Bubble Sort

//     // Output the sorted array
//     for(int i = 0; i < n; i++) cout << arr[i] << " ";

//     return 0;


// -----------------------------
// TIME COMPLEXITY: O(n^2)
// SPACE COMPLEXITY: O(1)
// -----------------------------


// -----------------------------
// INSERTION SORT
// -----------------------------
// Idea:
// Place each element at its correct position
// in the sorted part of the array.
// -----------------------------

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {          // Start from 1 (since first element is already "sorted")
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {   // Compare current element with previous
            swap(arr[j - 1], arr[j]);            // Swap if elements are out of order
            j--;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    // Input array
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    // Sort array
    insertion_sort(arr, n);
    
    // Output sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

// -----------------------------
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Stable sort
// -----------------------------
