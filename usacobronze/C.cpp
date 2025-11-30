// #include <iostream>

// using namespace std;

// int main() {
//     // Fast I/O
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     long long n, k;
//     if (!(cin >> n >> k)) return 0;

//     long long current_time = 0;
//     long long len = n;
//     long long pos = k;

//     while (len > 0) {
//         // STEP 1: Fast Forward
//         // If the cow is far back (index > 3), it simply moves forward by 2 spots
//         // every "block" (3 time units). We can skip many blocks at once.
//         if (pos > 3) {
//             long long blocks_to_skip = (pos - 2) / 2;
            
//             current_time += blocks_to_skip * 3;
//             len -= blocks_to_skip * 2;
//             pos -= blocks_to_skip * 2;
//         }

//         // STEP 2: Precise Simulation
//         // Now pos is either 1, 2, or 3 (or the line is very short).
        
//         // Case: Only 1 cow left
//         if (len == 1) {
//             // Action: Pet (Time + 1)
//             cout << "Yes\n" << current_time + 1 << "\n";
//             return 0;
//         }
        
//         // Case: Only 2 cows left
//         if (len == 2) {
//             // Action 1: Pet 1st cow
//             if (pos == 1) {
//                 cout << "Yes\n" << current_time + 1 << "\n";
//                 return 0;
//             }
//             // Action 2: Remove 2nd cow
//             if (pos == 2) {
//                 cout << "No\n" << current_time + 2 << "\n";
//                 return 0;
//             }
//         }
        
//         // Case: 3 or more cows left (Standard Block)
//         if (len >= 3) {
//             // Action 1: Pet 1st cow
//             if (pos == 1) {
//                 cout << "Yes\n" << current_time + 1 << "\n";
//                 return 0;
//             }
//             // Action 2: Remove 2nd cow
//             if (pos == 2) {
//                 cout << "No\n" << current_time + 2 << "\n";
//                 return 0;
//             }
//             // Action 3: Move 3rd cow to back
//             if (pos == 3) {
//                 current_time += 3;
//                 len -= 2;      // 2 cows removed from front
//                 pos = len;     // Cow 3 becomes the last cow
//                 // The loop continues...
//             }
//         }
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     ll n, k;cin >> n >> k;
//     ll t = 0;
//     while (n > 0) {
//         if (k > 3) {
//             ll skip = (k - 2) / 2;
//             t += skip * 3;
//             n -= skip * 2;
//             k -= skip * 2;
//         }  if (k == 1) {
//             cout << "Yes\n" << t + 1 << "\n";
//             return 0;}
//          if (k == 2){
//             cout << "No\n" << t + 2 << "\n";
//             return 0; }

// //         if (k == 3){
// //             t += 3;
// //             n -= 2;
// //             k = n;}
// //     } return 0;
// // }


// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll n, k;
//     if (!(cin >> n >> k)) return 0;

//     ll t = 0;

//     while (n > 0) {
//         // FAST FORWARD
//         // If k > 3, the cow moves closer to the front by 3 spots per cycle
//         // (1 petted, 1 removed, 1 moved to back).
//         // We skip as many cycles as possible while k stays > 1.
//         if (k > 3) {
//             ll skip = (k - 1) / 3;
//             t += skip * 3;
//             n -= skip * 2; // Line length decreases by 2 per cycle
//             k -= skip * 3; // Index decreases by 3 per cycle
//         }

//         // SIMULATION
//         if (k == 1) {
//             // Pet the first cow
//             cout << "Yes\n" << t + 1 << "\n";
//             return 0;
//         }
        
//         if (k == 2) {
//             // Remove the second cow
//             // Note: Even if n=2, the problem implies the process continues
//             // until the specific cow is handled.
//             cout << "No\n" << t + 2 << "\n";
//             return 0;
//         }

//         if (k == 3) {
//             // Move the third cow to the back
//             // This completes one full cycle of 3 time units.
//             t += 3;
//             n -= 2;      // 2 cows were removed (pos 1 and 2)
//             k = n;       // Cow 3 is now at the very end of the line
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);ll n, k;
    if (!(cin >> n >> k)) return 0; ll t = 0;
     while (n > 0) {
        if (k > 3) {
            ll skip = (k - 1) / 3;
            t += skip * 3;
            n -= skip * 2;
            k -= skip * 3;}
        if (k == 1) {
            cout << "Yes\n" << t + 1 << "\n";
            return 0;}
        
        if (k == 2) {
            cout << "No\n" << t + 2 << "\n";
            return 0;}
        if (k == 3) {
            t += 3;
            n -= 2;
            k = n;
        }
    }return 0;
}