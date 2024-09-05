/*
Question:
Fibonacci Number 
Solution:
many approaches I used loops :P
 */

#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int fib(int n){
    if(n==0 || n==1) return n;
    int prev1=0,prev2=1;
    for(int i=2;i<=n;i++){
        int temp = prev1 + prev2;
        prev1=prev2;
        prev2=temp;
    }
    return prev2;
}
int main(){
    int d;
    cin>>d;
    int res = fib(d);
    cout<<res<<endl;
    return 0;
}