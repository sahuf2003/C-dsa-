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
