/*
Question:
Number is given ...get sum of digits and then tell 
whether it is a prime or not
Solution:
get the sum of each digit
check if sum is prime or not with isPrime function.
 */

#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
bool isPrime(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++) if(n%i==0) return false;
    return true;
}
bool googly(int n){
    int temp=0;
    while(n!=0){
        temp+=n%10;
        n=n/10;
    }
    return isPrime(temp);
}
int main(){
    int d;
    cin>>d;
    string res = googly(d)==true? "YES" : "NO";
    cout<< res<<endl;
    return 0;
}