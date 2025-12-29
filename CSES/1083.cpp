//CODE BY SUDARSHAN RAJKUMAR_FROM_MANIPUR
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;cin>>n;ll k;int given_sum=0;
    for(int i=1;i<n;i++){//inputting n nos starting from 1 from the user
        cin>>k;
        given_sum+=k;//Finding the sum of the inputted numbers
    }
    int total_sum=(n*(n+1))/2;//total sum upto the given number
    cout<<(total_sum-given_sum)<<endl;//difference gives the missing number
    return 0;
    //Time Complexity:o(n);
}