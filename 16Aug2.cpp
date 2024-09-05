/*
Question:
string s return count of permutation by fixing positions of vowels present
in string.
Solution:
scan all vowels and have a count of that 
the consonants are then size-count.
now we will also have a map of 26 size where we will store freq of each char
and also we will be calculating factorial
 */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int permutation(string s,int n){
    if(n==0) return 0;
    vector<int>factorial(n+1);
    factorial[0]=1;
    factorial[1]=1;
    for(int i=2;i<=n;i++) factorial[i] = i*factorial[i-1];
    map<char,int>mpp;
    int vowels=0;
    for(char c:s){
        c=tolower(c);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') vowels++;
        else mpp[c]++;
    }
    int ans = factorial[n-vowels];
    for(auto i:mpp) if(i.second>1) ans = ans/factorial[i.second];
    return ans;
}

int main(){
    string s;
    cin>>s;
    int res= permutation(s,s.size());
    cout<<res<<endl;
    return 0;

}