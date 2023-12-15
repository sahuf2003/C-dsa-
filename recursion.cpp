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
