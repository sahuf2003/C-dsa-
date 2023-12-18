//hashing it is used when we want to count how many times same digit is occuring in an array
//inside main the value of array can be 10^6 and globally it can be 10^7
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    cout << "Hello world!"<<endl;
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[13] = {0};
    
    for(int i=0;i<n;i++){
        hash[arr[i]] +=1;
    }
    
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    }
    return 0;
}

//hash map for lower case characters
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void hash(int q){
    
}
int main() {
    // Write C++ code here
    cout << "Hello world!"<<endl;
    
    string s;
    cin>>s;
    int hash[25] = {0};
    
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c - 'a']<<endl;
    }
    return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void hash(int q){
    
}
int main() {
    // Write C++ code here
    cout << "Hello world!"<<endl;
    
    string s;
    cin>>s;
    int hash[256] = {0};
    
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
    return 0;
}

//map is a stl 
// there is a hashmap 
//unordered map uses o(1) for both average and best time complexity and o(n) for worst which is very rare
//map uses key value pairs 

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int> mpp;
    for(int i =0; i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        
        cout<<mpp[number]<<endl;
    }
    return 0;
}

//coding ninjas
vector<int> countFrequency(int n, int x, vector<int> &nums){
       vector<int> v(n);
       for(int i=0;i<n;i++){
           v[nums[i]-1]++;
       }
       return v;
}

//selection sort 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void selection_sort(int n, int arr[])
{
    for(int i =0;i<=n-2;i++){
        int  mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]) mini = j;
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    selection_sort(n,arr);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
