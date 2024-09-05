/*
Question:
array arr of length n , jack wants to label whether each number is even or 
odd in array.Return a string with labels like even or odd in sequence acc
to the numbers appearing
Solution:
if odd then s=s+odd else s=s+even
return at the end
 */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string jack(vector<int>arr,int n){
    string res="";
    for(int num:arr) res+= num%2==0? "even" : "odd";
    return res;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    string res= jack(arr,n);
    cout<<res<<endl;
    return 0;

}