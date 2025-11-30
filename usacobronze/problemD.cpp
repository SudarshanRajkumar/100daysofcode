#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, t, x;
    if (!(cin >> n >> t >> x)) return 0;

    string s;
    cin >> s;

    // Step 1: Analyze the pattern in one single cycle
    long long num_C = 0;       // Total clicks in one cycle
    long long num_U = 0;       // Total upgrades in one cycle
    long long base_gain = 0;   // Cows gained from upgrades happening within the cycle
    
    long long current_u_in_cycle = 0;
    
    for (char c : s) {
        if (c == 'C') {
            num_C++;
            // This click benefits from all upgrades that happened previously in THIS cycle
            base_gain += current_u_in_cycle; 
        } else {
            num_U++;
            current_u_in_cycle++;
        }
    }

    // Step 2: Calculate contribution from Full Cycles
    long long full_cycles = t / n;
    long long remaining_steps = t % n;
    
    long long total_cows = 0;

    if (full_cycles > 0) {
        // Constant part: Every cycle, we get cows from the base rate 1, 
        // plus the internal structure (base_gain), minus the cost of upgrades.
        long long constant_term = (1 * num_C) + base_gain - (num_U * x);
        
        // Variable part: Every cycle i (0 to full_cycles-1), the starting rate is higher.
        // Rate increases by i * num_U.
        // So we gain an extra (i * num_U) * num_C cows.
        
        // Sum of (constant_term) for F times:
        total_cows += full_cycles * constant_term;

        // Sum of (i * num_U * num_C) for i from 0 to full_cycles - 1:
        // We factor out (num_U * num_C) and sum i.
        long long sum_i = (full_cycles * (full_cycles - 1)) / 2;
        total_cows += sum_i * num_U * num_C;
    }

    // Step 3: Simulate the remaining steps
    // The rate at the start of the remainder phase:
    long long current_rate = 1 + (full_cycles * num_U);
    
    for (int i = 0; i < remaining_steps; i++) {
        if (s[i] == 'C') {
            total_cows += current_rate;
        } else {
            total_cows -= x;
            current_rate++;
        }
    }

    cout << total_cows << "\n";

    return 0;
}