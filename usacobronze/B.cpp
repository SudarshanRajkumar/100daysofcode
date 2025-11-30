#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long r, c, m, k;
    cin >> r >> c >> m >> k;

    // Impossible cases:
    // 1. If m < k, we can't even form a matching of size k, so resiliency < k.
    // 2. If k > min(r, c), we can always cover the whole grid with min(r, c) lines, 
    //    so we can never force k lines.
    if (m < k || k > min(r, c)) {
        cout << "NO\n";
        return;
    }

    // Try to find a split of x rows and y columns (where x + y = k)
    // such that they provide enough capacity to hold m items.
    // We iterate x from 0 to k.
    for (int x = 0; x <= k; x++) {
        int y = k - x;
        
        // Check bounds (though k <= min(r,c) handles this implicitly usually)
        if (x > r || y > c) continue;

        // Calculate capacity of the union of x rows and y columns
        // Capacity = (cells in x rows) + (cells in y columns) - (intersection)
        long long capacity = (x * c) + (y * r) - (long long)x * y;

        if (m <= capacity) {
            cout << "YES\n";
            
            // Initialize grid with empty space
            vector<string> grid(r, string(c, '.'));
            
            int count = 0;

            // STEP 1: Place the mandatory diagonal to ensure resiliency is AT LEAST k.
            // We place '#' at (i, i) for i from 0 to k-1.
            // Indices 0 to x-1 are covered by our chosen Rows.
            // Indices x to k-1 are covered by our chosen Columns (shifted).
            for (int i = 0; i < k; i++) {
                grid[i][i] = '#';
                count++;
            }

            // STEP 2: Fill the rest of the allowed capacity until we reach m.
            // Allowed cells: Row < x OR Column in range [x, k-1]
            // Note: We shifted the column selection to match the diagonal logic.
            // Selected Rows: 0 to x-1
            // Selected Cols: x to x+y-1 (which is x to k-1)
            
            for (int i = 0; i < r && count < m; i++) {
                for (int j = 0; j < c && count < m; j++) {
                    if (grid[i][j] == '#') continue; // Already filled by diagonal

                    // Check if this cell is inside our chosen union
                    bool inRow = (i < x);
                    bool inCol = (j >= x && j < k);

                    if (inRow || inCol) {
                        grid[i][j] = '#';
                        count++;
                    }
                }
            }

            // Output the grid
            for (int i = 0; i < r; i++) {
                cout << grid[i] << "\n";
            }
            return;
        }
    }

    // If no valid split found
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}