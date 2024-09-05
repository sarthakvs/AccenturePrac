/*
Question:
Convert number to its binary form
Solution:
brute force
 */

#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
string convert(int n){
    if(n==0) return "0";
    string res="";
    while(n!=0){
        res = res + (n%2==0?"1":"0");
        n=n/2;
    }
    return res;
}
int main(){
    int d;
    cin>>d;
    string res = convert(d);
    cout<<res<<endl;
    return 0;
}