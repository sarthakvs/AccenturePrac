/*
Question:
n elements given, find sum of values that are present in prime
index...array index starts with 0 then 1 and then so on.
Solution:
have a seperate function to check for prime start from i=2
therefore size less than 2 should returned 0
 */

#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
bool isPrime(int n){
    
    for(int i=2;i<=sqrt(n);i++) if(n%i==0) return false;
    return true;
}

int primesum(vector<int>arr,int n){
    int res=0;
    for(int i=2;i<n;i++) if(isPrime(i)) res+=arr[i];
    return res;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int res= primesum(arr,n);
    cout<<res<<endl;
    return 0;

}