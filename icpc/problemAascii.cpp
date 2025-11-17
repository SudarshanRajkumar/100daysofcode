#include<bits/stdc++.h>
using namespace std;
int main(){
    int g,c,l;cin>>g>>c>>l;
    vector<int> v = {g, c, l};
    sort(v.begin(),v.end());//took input and sorted all the vector in ascndng order
    int X=v[0];
    int Y=v[1];
    int Z=v[2];
    int diff =Z-X;//maximum-minimum we found out
    if(diff>=10)//difference at least 10 then we priint check again
        {   
            cout<<"check again"<<endl;
        }
    else{
            cout<<"final "<<Y<<endl;//otherwise print final + the middle element after sorting
    }
return 0;
}
