// How to count digits with maths
#include <iostream>
using namespace std;
int main() {
    int lastdigit;
    int cnt=0;
    int n;
    cin>>n;
    cout<<n<<endl;
    while(n>0){
        lastdigit = n%10;
        cout<<lastdigit<<endl;
        cnt++;
        n=n/10;
    }
        cout<<cnt;
    return 0;
}

#include<bits/stdc++.h>
//big 0 = o(log10(n)
int countDigits(int n){
	int cnt=(int)(log10(n)+1);
	return cnt;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    int main() {
    int n;
    cin>>n;
     int revno = 0;
     while(n>0){
         int ld = n%10;
         n = n/10;
         revno= (revno * 10) +ld;
     }   
     cout<<revno;
     return 0;
    }

//palindrome leetcode
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long reversed = 0;
        long long temp = x;

        while(temp != 0){
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp = temp / 10;
        }
     if (reversed == x){ 
         return true;
     }
      return false;
    }
};

//armstrong
bool checkArmstrong(int n){
	int og = n;
	int sum =0;
	while(n > 0){
		int ld = n % 10;
		sum = sum + (ld * ld * ld);
		n = n / 10;
	}
	if(og == sum ) return true;
	else return false;
}

// print all divisors
int sumOfAllDivisors(int n){
	int sum =0;
	for(int i= 1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i%j==0) sum = sum + j;
		}
	}	return sum;
}

//checking if prime
bool isPrime(int n)

{

    if(n<=1)return false;

    for(int i=2;i*i<=n;i++){

        if(n%i==0)return false;

    }

    return true;

}

//gcd
int calcGCD(int n, int m){
    while(m>0&& n>0){
        if(m>n) m=m%n;
        else n=n%m;
    }
    if(m==0) return n;
    return m;
}

//for gcd and hcf there are 2 ways first we can create a for loop and compare them dirctly and break the after reaching 
//2nd way is  euclidean algorithn which is given above eucleidian is a algorithm in this we the formula is gcd(a,b) = gcd(a-b,b)
//example a is always is bigger 10,12 (12,10) (2,10) if any no  (10,2) = (8,2) till the 0 is reach so we can use this algorithm by using modular
//thats it for today day 4 completed
