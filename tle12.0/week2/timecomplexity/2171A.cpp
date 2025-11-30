#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        /*
            EXPLANATION (Cows & Cats Leg Problem):

            We have:
                - Cats  → 2 legs
                - Cows → 4 legs

            Let:
                x = number of cats
                y = number of cows

            Total legs:
                2x + 4y = n

            1) If n is ODD → no solution
               Because LHS is always even (2x + 4y).
               So if n is odd → answer = 0.

            2) If n is EVEN:
               Divide the equation by 2:
                    x + 2y = n/2 = m x>=0 ;x=m-2y;m-2y=0solve y from here y=m/2

               Now y can take values:
                    y = 0, 1, 2, ..., floor(m/2)

               Number of values = floor(m/2) + 1

               Since m = n/2:
                    floor(m/2) = floor(n/4)

               So total valid combinations = floor(n/4) + 1.

            Therefore:
               If n is odd  → print 0
               If n is even → print n/4 + 1
        */

        cout << (n & 1 ? 0 : n/4 + 1) << endl;
    }

    return 0;
}
