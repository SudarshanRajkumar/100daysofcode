#include<bits/stdc++.h>
// #include<vector>
using namespace std;    
//When a function call itself until a specific condition is met
//RECURSION
// int cnt=0;
// void print(){
//     if(cnt==3)return;
//     cout<<cnt<<endl;
//     cnt++;
//     print();
// }
// int main(){
    
//     print();
//     return 0;
// }
//FUNCTIONAL RECURSIVE FUNCTION
  // Function to compute sum using parameterized recursion
/*void sumOfN(int i, int sum) {
    // Base case: when i < 1, print the total sum
    if (i < 1) {
        cout << "Sum = " << sum << endl;
        return;
    }

    // Recursive call: decrease i and add it to sum
    sumOfN(i - 1, sum + i);
}

int main() {
    int n;
    
    cin >> n;

    // Initial call with sum = 0
    sumOfN(n, 0);

    return 0;
}*/

// -----------------------------------------
// Time Complexity: O(n)
// Space Complexity: O(n)  (due to recursion stack)
// -----------------------------------------



// Function to compute sum of first n natural numbers using functional recursion
/*int sumOfN(int n) {
    // Base case
    if (n == 0)
        return 0;

    // Recursive relation: n + sum of (n-1)
    return n + sumOfN(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << "Sum = " << sumOfN(n) << endl;

    return 0;
}

// -----------------------------------------
// Time Complexity: O(n)
// Space Complexity: O(n)  (due to recursion stack)
// -----------------------------------------

*/


// Function to compute factorial using functional recursion
/*int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1)
        return 1;

    // Recursive relation: n! = n * (n-1)!
    return n * factorial(n - 1);
}

int main() {
    int n;
    // cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial = " << factorial(n) << endl;

    return 0;
}*/

// -----------------------------------------
// Time Complexity: O(n)
// Space Complexity: O(n)  (due to recursion stack)
// -----------------------------------------


//PROBLEMS ON FUNCTIONAL RECURSION
//1.REVERSE AN ARRAY
// ----------------------------------------
// Function: f
// Purpose: Recursively reverse the array
// Parameters:
//   i   -> current index from the start
//   arr -> array to be reversed
//   n   -> total number of elements
// ----------------------------------------
/*void f(int i, int arr[], int n) {
    // Base condition: stop when we reach the middle
    if (i >= n / 2) 
        return;

    // Swap the ith element from start with ith element from end
    swap(arr[i], arr[n - i - 1]);

    // Recursive call for the next pair
    f(i + 1, arr, n);
}

int main() {
    int n;
    cin >> n;  // Input size of the array

    int arr[n];
    // Input array elements
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Call recursive function to reverse the array
    f(0, arr, n);

    // Print reversed array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

// ----------------------------------------
// Time Complexity: O(n)
//    -> Each element is visited once up to the middle.
//
// Space Complexity: O(n)
//    -> Due to recursion call stack (n/2 recursive calls ≈ O(n)).
// ----------------------------------------

*/

 
// Check if string is palindrome using recursion
/*bool f(int i, string &s) {
    if (i >= s.size() / 2) return true;            // Base case
    if (s[i] != s[s.size() - i - 1]) return false; // Mismatch
    return f(i + 1, s);                            // Recursive call
}

int main() {
    string s = "MADAM";
    if (f(0, s)) cout << "Palindrome";
    else cout << "Not Palindrome";
    return 0;
}*/
// Time Complexity: O(n)
// -> Each character pair (front and back) is compared once.

// Space Complexity: O(n)
// -> Due to recursive call stack; for n/2 function calls, stack grows linearly.

//MULTIPLE RECURSION CALLS
// Program to find the nth Fibonacci number using recursion

int f(int n){
    if(n<=1)return n;
    int last=f(n-1);
    int slast=f(n-2);
    return last+slast;
}
int main(){
    cout<<f(4);
    return 0;
}int f(int n){
    // Base case: if n is 0 or 1, return n
    if(n <= 1) return n;

    // Recursive call to find (n-1)th Fibonacci number
    int last = f(n - 1);

    // Recursive call to find (n-2)th Fibonacci number
    int slast = f(n - 2);

    // Return sum of previous two terms
    return last + slast;
}

int main(){
    cout << f(4);  // Output the 4th Fibonacci number
    return 0;
}

/*
Time Complexity: O(2^n) 
→ Each call generates two more calls, leading to an exponential growth in recursion tree.

Space Complexity: O(n)
→ Due to recursion stack depth up to n.
*/