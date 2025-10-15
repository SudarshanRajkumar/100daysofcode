//Algorithms
//Containers
//Functions
//Iterators

//1)Pairs:It is a part of utility library
#include <bits/stdc++.h>
using namespace std;

void explainPair() {
    // Simple pair
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << endl;

    // Nested pair
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    // Pair array
    pair<int, int> arr[] = {{1, 2}, {3, 5}, {5, 1}};
    cout << arr[1].second << endl;  // prints 5
}
//2)Vector:It is a container which is dynamic in nature 
void explainVector() {
    vector<int> v1;                 // declare a vector
    v1.push_back(1);
    v1.emplace_back(2);

    vector<pair<int,int>> v2;       // vector of pair data type
    v2.push_back({1,2});
    v2.emplace_back(1,2);

    vector<int> v3(5,100);          // 5 elements, all 100
    vector<int> v4(5);              // 5 elements, all 0
    vector<int> v5(5,20);           // 5 elements, all 20
    vector<int> v6(v5);             // copy of v5
//Iterator
    vector<int>::iterator it=v.begin();
    it++;
    cout<<*(it)<<" ";
    it+=2;
    cout<<*(it)<<" ";
    vector<int>::iterator it=v.end();
    vector<int>::iterator it=v.rend();
    vector<int>::iterator it=v.rbegin();

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back();<<" ";

    for (vector<int>::iterator it=v.begin();it !=v.end();it++){
        cout<<*(it)<<" ";

    }
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for(auto it:v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for(auto it:v){//auto means iterate on the data type
        cout<<it<<" ";
    }
    //{10,20,12,23}
    v.erase(v.begin()+1);
    //{10,20,12,23,35}
    v.erase(v.begin()+2,v.begin()+4);//{10,20,35}Syntax:[start,end)

    //Insert function
    vector<int>v(2,100);//{100,100}
    v.insert(v.begin(),300);//{300,100,100};
    v.insert(v.begin()+1,2,10);//{300,10,10,100,100}

    vector<int>copy(2,50);//{50,50}
    v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}
    
    //{10,20}

    cout<<v.size(); //2

    //{10,20}
    v.pop_back();//{10}

    //v1->{10,20}
    //v2 ->{30,40}
    v1.swap(v2);//v1 -->{30,40},v2 --->{10,20}
    v.clear();//Erases the entire vector
    cout<<v.empty();
}
//3 LIST
void explainList(){
    list<int> ls;

    ls.push_back(2);//{2}
    ls.emplace_back(4);//{2,4}

    ls.push_back(5);//{5,2,4}

    ls.emplace_front();{2,4};
    //Rest functions same as vector
    //begin,end,rbegin,rend,clear,insert,size,swap
}
//4.DEQUE
void explainDeque(){

    deque<int>dq;
    dq.push_back(1);//{1}
    dq.emplace_back(2);//{1,2}
    dq.push_front(4);//{4,1,2}
    dq.emplace_front(3);//{3,4,1,2}
    
    dq.pop_back();//{3,4,1}
    dq.pop_front();//{4,1}

    dq.back();
    dq.front();
    //rest functions same as vector
    //begin,end,rbegin,rend,clear,insert,size,swap
}
//5.STACK
void explainStack(){
    stack<int>st;//LIFO
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.push(3);//{3,3,2,1}
    st.emplace(5);//{5,3,3,2,1}

    cout<<st.top();//Prints 5 (Indexing access is not allowed)"**st[2]is invalid**"
    st.pop();//st looks like {3,3,2,1}
    cout<<st.top();//3
    cout<<st.size();//4
    cout<<st.empty();
    stack<int>st1,st2;
    st1.swap(st2);//Time complexity is 0(1)
    //Everything happens in constant time

}
//6.QUEUE
void explainQueue(){
        queue<int> q;//FIFO:First In First Out 
        q.push(1);//{1}
        q.push(2);//{1,2}
        q.emplace(4);//{1,2,4}
        q.back()+=5
        cout<<q.back();//Prints 9
        //Q is {1,2,9}
        cout<<q.front();//Prints 1
        q.pop();//{2,9}
        cout<<q.front();//prints 2
        //size swap empty same as stack
        //All the operations happens in constant time
        //time complexity is 0(1)
}
//7.PRIORITY-QUEUE
void explainPQ(){
    priority_queue<int>dq;
//Tree data structure is maintained inside
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(10);//{10,8,5,2}
    cout<<pq.top(); //Prints 10
    pq.pop(); //{8,5,2}
    cout<<pq.top();//prints 8
    //size swap empty function same as others
    //MINIMUM HEAP
    //Priority queue which stores the minimum element at the top
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5);//{5}
    pq.push(2);//{2,5}
    pq.push(8);//{2,5,8}
    pq.emplace(10);//{2,5,8,10}

    cout<<pq.top()//Prints 2
    //Push and pop happens in log(n);
    //Top happens in O(1);

}
//8.SET
void explainSet(){//SET-->SORTED ORDER  AND STORES UNIQUE 
    set<int>st;
    st.insert(1);//{1}
    st.emplace(2);//{1,2}
    st.insert(2);
    st.insert(4);
    st.insert(3);
    //Functionality of insert in vector
    //can be used also,that only increases
    //efficiency
    //begin(),end(),rbegin(),rend(),size(),
    //empty() and swap() are same as those of above

    //{1,2,3,4,5}
    auto it=st.find(3);//Returns an iterator which points to this 3
    //{1,2,3,4,5}
    auto it=st.find(6);//Returns an interator which points to st.end()
    //{1,4,5}
    st.erase(5); //erases 5//takes logarithmic time

    int cnt=st.count(1);//Answer will be 1 or 0
    auto it=st.find(3);
    st.erase(it);//It takes constant time
    //{1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);//after erase {1,4,5}[first,last)
    //lower_bound(),and upper_bound() function works in the same way
    //as in vector it does

    //THIS IS THE SYNTAX
    auto it=st.lower_bound(2);
    
    auto it=st.upper_bound(3);
    //IN  A SET,EVERYTHING HAPPENS IN 0(logN);
}
//9.MULTISET
void explainMultiSet(){
    //Everything is same as set
    //Only stores duplicate element also

    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1);
    int cnt=ms.count(1);

    //only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1),ms.find(1)+2);
    //Rest all functions are same as set
}
//10.UNORDERED-SET
void explainUSet(){//Time Complexity is O(1) in most of the cases;
    //once in a blue moon,the time complexity goes for O(n);
    unordered_set<int> st;//unique elements in a randomized order
    //lower_bound and upper_bound function
    //does not works ,rest all functions are same
    //as above,it does not store in any particular order
    //it has a better time complexity
    //than set in most cases,except some when collision happens
}
//11.MAP
void explainMap(){
    map<int,int> mpp;
    
    map<int,pair<int,int >> mpp;

    map<pair<int,int>,int>mpp;
    mpp[1]=2;
    mpp.emplace({3,1});
    mpp.insert({2,4});
    mpp[{2,3}]=10;
    for(auto it: mpp){
        cout<<it.first << " "<<it.second<<endl;//Sorted order of keys ;no duplicates
    }
    cout<< mpp[1];
    cout<<mpp[5];
    auto it =mpp.find(3);
    cout<<*(it).second;
    auto it =mpp.find(5);
    //this is the SYNTAX
    auto it=mpp.lower_bound(2);

    auto it=mpp.upper_bound(3);
    //erase,swao ,size ,empty are same as above
}
//12.MULTI-MAP
void explainMultimap(){
    //Everything same as map,only it can store multiple keys
    //only mpp[key]cannot be used here
}
//13.UNORDERED-MAP
void explainUnorderedMap(){
    //same as set and unordered_set difference
    //Unique keys and wont be sorted
    //Time complexity is 0(1)and 0(n)in the worst case once in blue moon
}

int main() {
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPQ();
    explainSet();
    explainMultiSet();
    explainUSet();
    explainMap();
    explainMultimap();
    explainUnorderedMap();
    return 0;
}

