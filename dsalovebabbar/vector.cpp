#include<bits/stdc++.h>
// #include<vector>
using namespace std;
void explainComparator(){
   int arr[]={5,6,1,2};
   sort(arr,arr+4);
   for(int i=0;i<4;i++){
      cout<<arr[i]<<" ";
   }
}#include<bits/stdc++.h>
// #include<vector>
using namespace std;
void explainComparator(){
   int arr[]={5,6,1,2};
   sort(arr,arr+4);
   for(int i=0;i<4;i++){
      cout<<arr[i]<<" ";
   }
}
// void explainSort(){
//    int arr[5]={6,2,1,7,8};
//    sort(arr,arr+5);
//    for(int i=0;i<5;i++){
//       cout<<arr[i]<<" "<<endl;

//    }
//    vector<int>vec={5,7,8,8,1};
//    sort(vec.begin(),vec.end());
//    for(auto it:vec){
//       cout<<it<<" ";
//    }

// }
int main(){
// int main(){
//    //vector creation
//     vector<int>marks;
//     // vector<int>distance(15,0);
//     // cout<<*(distance.begin());
//     marks.push_back(10);
//     marks.push_back(20);
//     marks.push_back(30);
//     marks.push_back(40);
//     cout<<"Size:"<<marks.size()<<endl;
//     marks.pop_back();
//     cout<<endl<<"Size:"<<marks.size()<<endl;
//     cout<<marks.front()<<endl;
//     cout<<marks.back();
//     marks[0]=100;
//     cout<<endl<<marks[0];
    //empty
    // if(marks.empty()==true){
    //     cout<<endl<<"The vector is empty";}
    // else{
    //     cout<<endl<<"The vector is not empty";
    // }
    
   

//     return 0;   
// }


 //member functions
    /*begin():returns an iterator pointing to the first  element in the vector
    end():returns an iterator pointing to the position after the last element in the vector
    size():returns the no of elements in the vector
    empty():Checks if the vector is empty.(whether its size is zero)
    capacity():returns the no of elements that the vecotr can hold before needing to allocate more space
     */
//  explainSort();
explainComparator();
 return 0;
}