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
