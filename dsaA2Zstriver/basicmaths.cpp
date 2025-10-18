#include<bits/stdc++.h>
using namespace std;
//1.Count the number of digits in a number
// int count(int n){
//     int cnt=0;
//     while(n>0){
//         int lastdigit=n%10;
//         cnt+=1;
//         n=n/10;
//     }
//     return cnt;
// //OR
// int count(int n){
//     int cnt=int(log10(n)+1);
//     return cnt;
// }

 
//2.REVERSE A NUMBER
// //int reverse(int x) {
//         int rev=0;
//         while(x!=0)
//          {
            
//            int lastdigit=x%10;
//            rev=(rev*10)+lastdigit;
//            x=x/10;
//          }
//     return rev;
        
//     }

// int main(){
//     //int n;int d;
  
// //     int x;
// //     //cin>>n;
// //     cin>>x;
// //     //d=count(n);
// //    int  e=reverse(x);
// //     //cout<<d;
// //     cout<<e;

//     return 0;

// }
//PALINDROME
// int main(){
//     int n;
//     cin>>n;
//     int revnum=0;
//     int dup=n;
//     while(n>0){
//         int ld=n%10;
//         revnum=(revnum*10)+ld;
//         n/=10;

//     }
//     if(revnum==dup)cout<<"true";
//     else 
//     cout<<"false";
//     return 0;`
// }
//ARMSTRONG NUMBER
// int main() {
//     int n;
//     cin >> n;
//     int dup = n;
//     int sum = 0;
//     int ld;

//     while (n > 0) {
//         ld = n % 10;
//         sum = sum + (ld * ld * ld);
//         n = n / 10;
//     }

//     if (sum == dup)
//         cout << "Armstrong";
//     else
//         cout << "Not an armstrong number";

//     return 0;
// }

//PRINT ALL DIVISORS


//PRIME NUMBERS
// int main(){
//     int n;cin>>n;
//     int cnt=0;
//     for(int i=1;i*i<=n;i++){
//         if(n%i==0){
//         cnt++;
    
//         if((n%i)!=i)cnt++;}

// }
// if(cnt==2)cout<<"PRIME";
// else cout<<"NOT PRIME";
// return 0;
// }

//GCD OR HCF
// int gcd(int a, int b) {
//     while (a > 0 && b > 0) {
//         if (a > b)
//             a = a % b;
//         else
//             b = b % a;
//     }
//     // when one becomes 0, the other is the gcd
//     if (a == 0) return b;
//     return a;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int c=gcd(a,b);
//     cout<<c;
//     return 0;


// }

//PRINT ALL DIVISORS
void printDivisiors(int n){
    vector<int>ls;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            ls.push_back(i);
        if (i != n / i) { 
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it:ls)cout<<it<<" ";
}
int main()
{
    int n;cin>>n;
    printDivisiors(n);
    return 0;
}
