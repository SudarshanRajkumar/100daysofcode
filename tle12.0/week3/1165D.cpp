//CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t; 
    while(t--){

    ll n; cin >> n;
     vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    ll originalNum = a[0] * a[n - 1];

    vector<ll> b;

    for (ll i = 2; i<= sqrt(originalNum); i++)
    {
        if (originalNum % i == 0)
        {
            b.push_back(i);
            if (i!=originalNum/i)
            {
                b.push_back(originalNum/i);
            }
        }
    }

    sort(b.begin(), b.end());
    if (a==b)
    {
        cout << originalNum << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
    }
    return 0;
}
 