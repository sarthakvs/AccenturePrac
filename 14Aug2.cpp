/*
Question:
Find equilibrium point in array which is the sum of left=sum of right elements
if no such point then return -1
Solution:
find prefix sum and suffix sum then at each index claculate if theyre equal
if yes then return index else -1
 */

#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int equalSum(vector<int>arr,int n){
    vector<int>pre(n,0),suf(n,0);
    pre[0] = arr[0];
    for (int i = 1; i < n; i++) pre[i] = arr[i] + pre[i-1];
    suf[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--) suf[i] = arr[i] + suf[i+1];
    for(int i=0;i<n;i++) if(suf[i]==pre[i]) return i;
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int res= equalSum(arr,n);
    cout<<res<<endl;
    return 0;

}