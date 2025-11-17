#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // size of the array

    int even = 0, odd = 0, positive = 0, negative = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        // Check sign
        if (x > 0)
            positive++;
        else if (x < 0)
            negative++;

        // Check even/odd (0 is even)
        if (x % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;

    return 0;
}
