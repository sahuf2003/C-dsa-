//Day 5 
//function inside function
// this is called recursion stackoverflow
#include <iostream>
using namespace std;
int cnt = 0;
void print(){
    cout<<cnt<<endl;
    if(cnt==7) return;
        cnt++;
        print();
}
int main() {
    int c =0;
    cout << "Hello world!";
    print();
    return 0;
}

vector<int> printNos(int x) {
  if (x == 0){
      return{};
  }

  vector<int> v = printNos(x-1);
    v.push_back(x);

    return v;
}
//recursion stackoverflow base case recursrion tree
//printing name 5 time
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int cnt = 0;
void name(){
    cout<<"hello sahuf"<<endl;
    if(cnt==4) return;
    cnt++;
    name();
}


int main() {
    // Write C++ code here
    cout << "Hello world!";
    name();
    return 0;
}

#include<iostream>
using namespace std;

void print(int i,int n){
    if(i>n) return;
    cout<<"Hello Sahuf"<<endl;
    print(i+1,n);
}

int main(){
    int n;
    cin>>n;
    cout<<n<<endl;
    print(1,n);
}

//print 1 to n with recursion
#include<iostream>
using namespace std;

void print(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    print(i+1,n);
}

int main(){
    int n;
    cin>>n;
    print(1,n);
}

//print n to 1

#include<iostream>
using namespace std;

void print(int i,int n){
    if(i<1) return;
    cout<<i<<endl;
    print(i-1,n);
}

int main(){
    int n;
    cin>>n;
    print(n,n);
}

//print 1 to n with backtracking
#include<iostream>
using namespace std;

void print(int i,int n){
    if(i<1) return;
    print(i-1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cin>>n;
    print(n,n);
}
//print n to 1 with backtracing
#include<iostream>
using namespace std;

void print(int i,int n){
    if(i>n) return;
    print(i+1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cin>>n;
    print(1,n);
}

// This is parameterized function recursion in this there are 2 parameters
#include <iostream>
using namespace std;
void add(int i,int n){
    if(i<0){
        cout<<n;
        return;
    }
    add(i-1,n+i);
}
int main() {
    // parameterized function 
    cout << "Hello world!";
    int n;
    cin>>n;
    add(n,0);

    return 0;
}

//This is functional recursion in this the function is called there is only one parameter
//it is used to return the function it just means f(n) = n + f(n-1) and it goes on
#include<iostream>
using namespace std;
int sum(int x)
{
    if(x==0) return 0;
    return x + sum(x-1);
}

int main(){
    int x;
    cin>>x;
    cout<<sum(x);
}

// this is factorial with functional recursion in this we return 1 there are 2 ways to do it we can do if(x==1) return 1 or if(x==0) return 1
#include<iostream>
using namespace std;
int fact(int x)
{
    if(x==0) return 1;
    return x * fact(x-1);
}

int main(){
    int x;
    cin>>x;
    cout<<fact(x);
}

//This is a parameterized way to write a factorial in recursion
// 
#include<iostream>
using namespace std;

void fact(int i, int n)
{
    if(i==1){
        cout<<n;
        return;
    }
    fact(i-1,n*i);
}

int main(){
    int n;
    cin>>n;
    fact(n,1);
}


//How to reverse an array we will swap value in for loop
//reversing an array with recursion
#include<bits/stdc++.h>

using namespace std;
void rev(int i,int arr[], int n)
{
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    rev(i+1,arr,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    rev(0,arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}

//checking if the string is palindrome
//code below is given in boolean function

#include<bits/stdc++.h>
using namespace std;
bool f(int i,string &s)
{
    if(i >=(s.size()/2)) return true;
    if(s[i] != s[s.size() - i - 1]) return false;
    return f(i+1,s);
}

int main(){
    string s;
    cin>>s;
    cout<<f(0,s);
}
