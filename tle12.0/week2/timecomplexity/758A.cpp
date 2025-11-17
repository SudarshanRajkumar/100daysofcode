    #include<bits/stdc++.h>
    using namespace std;
    int main(){
            int n;cin>>n;int ans=0;
            vector<int>v(n);//declare a vector of variable size n
            int maxm=-1;
            for(int i=0;i<n;i++){
                cin>>v[i];
                maxm=max(maxm,v[i]);//maximum first ta puthokay
            }
            for(int i=0;i<n;i++){
                ans+=(maxm-v[i]);//every element khudinggi awatpa peisa do maximum dagi kaidokay
            }                   //and we do addition and store it in answer and print it
            cout<<ans<<endl;
            return 0;
    }
/*
//Find max (non-negative values)	maxm = -1
Find max (any values)	            maxm = INT_MIN or maxm = a[0]
Find min	                        minm = INT_MAX or minm = a[0]
Flag for “not found”                flag = -1
Flag for “true/false check ”	    flag = 0 or flag = false 
*/