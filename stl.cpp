//started using stl(standard template library)
//pair it stores 2 values;
#include <iostream>
using namespace std;
int main() {
    pair<int , int> p ={5,4};
    cout<< p.first<< " " << p.second<< " ";
    //nested pair
    pair<pair<int ,int> , int> nest = {{4,6},5};
    cout << nest.first.second <<" ";
    cout<< nest.first.first << " ";
    cout << nest.second<< " ";
    //array in pair
    pair<int , int> arr[] = {{3,4},{4,6}};
    cout<< arr[1].first;
    return 0;
}

// Vector is used for dynamic array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v;
    v.push_back(9);
    v.emplace_back(8);
    cout<<v[0]<<" "<<v[1];
    cout<<endl;
    
    //vector for pairs
    vector<pair<int, int>> v2;
    v2.push_back({3,4});
    v2.emplace_back(6,6);
    
    cout<<v2[0].first<<" "<<v2[1].second;
    cout<<endl;
    //declaring vector
    
    vector<int> v1(5,200);
        cout<<v1[0]<<" "; 
        cout<<v1[1]<<" ";   
        cout<<v1[2]<<" ";   
        cout<<v1[3]<<" ";   
        cout<<v1[4]<<" ";   
        
        cout<<endl;
            vector<int> v3(5);
        cout<<v3[0]<<" "; 
        cout<<v3[1]<<" ";   
        cout<<v3[2]<<" ";   
        cout<<v3[3]<<" ";   
        cout<<v3[4]<<" ";   
        
        cout<<endl;
            vector<int> v5(v3);
        cout<<v3[0]<<" "; 
        cout<<v3[1]<<" ";   
        cout<<v3[2]<<" ";   
        cout<<v3[3]<<" ";   
        cout<<v3[4]<<" ";   
        cout<<endl;
        
        cout<<v1.back(); 
        cout<<v.back();
        
        cout<<endl;
        
        vector<int>::iterator me = v.begin();
        me++;
        cout<<*(me)<<" ";
        cout<<endl;
        for(vector<int>::iterator us =v3.begin(); us!=v3.end();us++){
            cout<<*(us)<< " ";
        }
        cout<<endl;
        for(auto li=v.begin(); li!=v.end();li++){
            cout<<*(li)<<" ";
        }
        cout<<endl; 
        //for each loop
        for(auto us :v){
            cout<<us<<" ";
        }
        
        
        v.erase(v.begin()+1);//single element deletion
        v3.erase(v.begin()+1, v3.begin() +5); //(start, end) elements in between will be deleted
        vector<int> del(5);
        del[0]= 10;
        del[1]= 3;
        del[2] = 4;
        del[3] =7;
        del[4] =8;
        cout <<endl;
        for(auto lol: del){
            cout<<lol<<" ";
        }
                del.erase(del.begin());
        cout<<endl;
        for(auto lol: del){
            cout<<lol<<" ";
        }
        cout<<endl;
        del.erase(del.begin()+1,del.begin()+3);
                for(auto lol: del){
            cout<<lol<<" ";
        }
        cout<<endl;
        
        del.insert(del.begin()+1,78);
        del.insert(del.begin(),9,10);//insert 10 9 times
        del.insert(del.begin(),v1.begin(),v1.end());//insert whole error
                for(auto lol: del){
            cout<<lol<<" ";
        }
        cout<<endl;
        cout<<del.size();//size check
        del.pop_back();//last element ko pop karayga
        for(auto lol: del){
        cout<<lol<<" ";
        }
        cout<<endl;
        del.swap(v1);//swap karega obviously
                        for(auto lol: del){
            cout<<lol<<" ";
        }
        cout<<endl;
                        for(auto lol: v1){
            cout<<lol<<" ";
        }
        del.clear();//khali karega
        cout<<del.empty();//check karega khali hai kya?
    return 0;
}


//list same shit as vector just difference is theris push_front and emplace_front it has better time complexity then vector 

// list
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    list<int> ls(5,90);
    ls.push_back(40);
    ls.push_front(50);
    ls.emplace_front(60);
    list<int> ds(9,27);
    ls.swap(ds);
    for(auto oops:ls){
        cout<<oops<<" ";
    }
    cout<<endl;
    for(auto oops:ds){
        cout<<oops<<" ";
    }
    return 0;
}
//deque same as both but better

// list
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    deque<int> dq(5,90);
    dq.push_back(40);
    dq.push_front(50);
    dq.emplace_front(60);
    dq.emplace_back(40);
    for(auto oops:dq){
        cout<<oops<<" ";
    }
    cout<<endl;
    dq.pop_back();
    dq.pop_front();
  cout<<  dq.front();
    cout<< dq.back();
    for(auto oops:dq){
        cout<<oops<<" ";
    }
    return 0;
}
//lifo is stack
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//big o(1)
int main(){
    
    stack<int> st;
    st.push(3);
    st.push(4);
    st.push(6);
    
    st.pop();
    
    cout<<st.top()<<" ";
    cout<<endl;
    cout<<st.size()<<" ";
    cout<<endl;
    cout<<st.empty()<<"";
        stack<int> s1;
    s1.swap(st);
    
    cout<<s1.empty()<<" "<<s1.top();
    
    
    return 0;
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//big o(1)
int main(){
    
    queue<int> q;
    q.push(9);
    q.push(23);
    q.push(11);
    q.back()+=5;
    
    cout<<q.back()<<" ";
    
    q.pop();
    
    cout<<q.front()<<" ";
    cout<<q.empty();
    //size swap same as stack
    return 0;
}

//priority queue


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//push pop = logn
//top o(1)
int main(){
    //largest will always be at top
    //max heap
    priority_queue <int> pq;
    pq.push(8);
    pq.emplace(9);
    pq.push(3);
    
    cout<<pq.top()<<" ";
    pq.pop();//will remove top value
    cout<<pq.top()<<" ";
    
    
    priority_queue<int, vector<int>, greater<int>> qp;
    //smaller will be at top
    //min heap
    qp.push(1);
    qp.push(2);
    qp.emplace(9);
    
    cout<<qp.top()<<" ";
    qp.pop();
    cout<<qp.top()<<" ";
    
    //size swap same as stack
    return 0;
}


//set is in sorted order and unique

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//logn  complexity
int main(){
    set<int> st;
    st.insert(1);
    st.insert(3);
    st.insert(3);
    st.insert(4);
    //same as vector begin end swap size
    cout<<st.count(3)<<" ";
    cout<<st.count(2)<<" ";
    
    auto it = st.find(3);
    // auto it = st.find(2);//it will give next after 4 ki location
    
    
    st.erase(1);
    
    cout<<st.count(1);
    st.erase(it);
    
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    
    st.erase(it1,it2);
    
    auto it3 = lower_bound(3);
    auto it4 = upper_bound(3)
    
    
}

//multiset
#include <iostream>
#include <set> // Include the necessary header file for using multiset
using namespace std;

int main() {
    multiset<int> st;
    st.insert(1);
    st.insert(3);
    st.insert(3);
    st.insert(2);
    st.insert(2);
    st.insert(2);

    cout << st.count(3) << " ";
    st.erase(3); // Delete all occurrences of value 3
    cout << st.count(3) << " ";

    auto it = st.find(2);
    st.erase(it); // Erase one occurrence of value 2
    cout << st.count(2) << " ";

    it = st.find(2);
    st.erase(it, next(it, 1)); // Erase one occurrence of value 2 using iterators
    cout << st.count(2) << " ";

    return 0;
}
//unordered_set not sorted not unique
//unordered_set<int> st;
// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    //map is used for saving key-value pairs in sorted order keys are unique 
    map <int, int> mpp;
    mpp[1]=2;
    mpp.emplace({3,5});
    mpp.insert({4,6})
    
    map<int, pair<int, int>> mpp;
    map<pair<int,int>, int> mpp;
    mpp[{3,6}]=18;

    for(auto it :mpp){
        cout<<it.first<<" "<<it.second<<" ";
        
    }
    
    cout<<mpp[1];
    cout<<mpp[5];
    
    auto it = mpp.find(5);
    cout<<*(it).second;
    
    auto it1 = mpp.lower_bound(6);
    auto it2 = mpp.upper_bound(9);
    
    //multimap dont have unique key multiple key can save 
    //unordered map not even sorted 
    
    
    
    //now we will talk about 4 imp algorithms
    //sort is used for sorting
    //builtinpopcount
    //permutation
    //max_element and min_element to check min and max element
    
    
    //sort ka basic formula
    sort(a, a+n);
    sort(v.begin(), v.end())// sort in vector
    sort(a,a+n,greater<int>)//sort in descending order
    
    //example {3,4,8,2} agar i want to sort last ke 2 digits 
    sort(a+2,a+4)
    
    pair<int,int> a[]={{1,2},{2,1},{4,1}
    //basically if i want to sort on basis of my own way example i want to sort on basis of second digit and if second digits are same i will sort in descending order
    sort(a,a+n,comp)//comp is my sorting boolean function
    
    bool comp(pair<int,int> p1, pair<int,int>p2){
        if(p2.second > p1.second) return true;
        if(p1.second > p2.second) return false;
        if (p1.first > p2.first) return true;
        return false;
    }
        //ans will be {{4,1},{2,1},{1,2}}
        
        int num = 7; //in binary will be 111
        int cnt = __builtinpop_count();//will check no of set bits means no of 1 in 7 it will be 3 and 6 will be 
        
        
         long long num = 676858494794;
         int cnt = __builtinpop_countll();//for long long kyu int itna zyada nhi karpayga
         
         string s ="123" //no hamesha in ascending order
         // agar string ascending order main na ho toh sort use karlena 
         //sort(s.begin(),s.end());
            do{
                cout<<s<<endl;
            }while(next_permutaion(s.begin(),s.end()));
            //iske saare permutation nikalega
    
    
    int max = *max_element(a,a+n);
    int min = *min_element(a,a+n);
    return 0;
}
