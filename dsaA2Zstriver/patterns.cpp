
#include<bits/stdc++.h>
using namespace std;
//Pattern 1
void print1(int n){
    for(int  i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
//Pattern 2
void print2(int n){
    for(int  i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
//Pattern 3
void print3(int n){
    for(int  i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
//Pattern 4
void print4(int n){
    for(int  i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
//Pattern 5
void print5(int n){
    for(int  i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
//PATTERN 6
void print6(int n){
    for(int  i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
//PATTERN 7
void print7(int n){
    for(int  i=0;i<n;i++){
        //SPACE
        for(int j=0;j<=n-i-1;j++)
        cout<<" ";
        for(int j=0;j<2*i+1;j++){
            cout<<"*";}
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        
        cout<<endl;
    }

}
//PATTERN 8
void print8(int n){
    for(int  i=0;i<n;i++){
        //SPACE
        for(int j=0;j<i;j++)
        cout<<" ";
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";}
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        
        cout<<endl;
    }

}
void print10(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n)stars=2*n-i;
        for(int j=1;j<=stars;j++){
        cout<<"*";
        }
        
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    //print1(n);
    //print2(n);
    //print3(n);
    //print4(n);
    //print5(n);
    //  print6(n);
    // print7(n);
    // print8(n);
    print10(n);

    return 0;

}
