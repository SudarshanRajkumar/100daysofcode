// CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    char s, q;

    cin >> a >> s >> b >> q >> c;

    if(s == '+'){
        if(a + b == c) 
        cout << "Yes";
        else 
        cout << a + b << '\n';
    }
    else if(s == '-'){
        if(a - b == c) 
            cout << "Yes";
        else 
            cout << a - b << '\n';
    }
    else if(s == '*'){
        if(a * b == c) 
            cout << "Yes";
        else 
            cout << a * b << '\n';
    }

    return 0;
}
