// //Heaad Recursion  (Work Happens After Recursion)
// #include <bits/stdc++.h>
// using namespace std;

// // Recursive function to print numbers from 1 to N
// void print1ToN(int i, int n) {
//     if (i > n) return;
//     print1ToN(i + 1, n);  // recursive call before printing
//     cout << i << " "; // print after recursion call
// }

// int main(){
//     int n = 5;
//     // Printing 1 to N
//     print1ToN(1, n);
//     return 0;
// }
//Tail Recursion (Work Happens Before Recursion)

#include <bits/stdc++.h>
using namespace std;

// Recursive function to print numbers from 1 to N
void print1ToN(int i, int n) {
    if (i > n) return;
    cout << i << " "; // print before recursion call
    print1ToN(i + 1, n);    // recursive call after printing
}

int main(){
    int n = 5;
    // Printing 1 to N
    print1ToN(1, n);
    return 0;
}
//Sum of first n natural nos using recursion

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int NnumbersSum(int N) {
        // Base case: if N is 0, return 0
        if (N == 0) return 0;
        // Recursive case: add N to the sum of N-1
        return N + NnumbersSum(N - 1);
    }
};

int main() {
    Solution solution;
    int N = 10; // Example input
    cout << "Sum of first " << N << " numbers is " << solution.NnumbersSum(N) << endl;
    return 0;
}

//Factorial of a Given Number

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long int factorial(int n) {
        // Base case: factorial of 0 or 1 is 1
        if (n <= 1) return 1;
        // Recursive case: N * factorial of N-1
        return n* factorial(n - 1);
    }
};

int main() {
    Solution solution;
    int N = 5; // Example input
    cout << "Factorial of " << N << " is " << solution.factorial(N) << endl;
    return 0;
}


//Sum of array elements using recursion

class Solution {
public:
    // Helper recursive function
    int func(int i, vector<int>& arr, int N) {
        if (i >= N) return 0;
        return arr[i] + func(i + 1, arr, N);
    }

    // Main function that user calls
    int arraySum(vector<int>& arr) {
        return func(0, arr, arr.size());
    }
};
/
//Reverse a string using recursionf
