#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int window(string s,int n,int k){
    int start=0,res=0,curr=0;
    for(int end=0;end<n;end++){
        if(s[end]=='a') curr++;
        if(end-start+1>k) if(s[start++]=='a') curr--;
        res=max(curr,res);
    }
    return res;
}

int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    int res= window(s,s.size(),k);
    cout<<res<<endl;
    return 0;

}