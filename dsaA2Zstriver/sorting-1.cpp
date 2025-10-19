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
    