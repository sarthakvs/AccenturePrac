/*
Question:
String consist of sequence of 0s and 1s.It is spelling out a word in binary
A is 1 , B is 11 , C is 111 and so on ....output the orignal word.Letters are
seperated by 0.
Solution:
if element is 1 increase count 
then if we encounter a 0 or if we are at the end of our string(edge case)
then we just add the character which will be number of 1s plus 'A' 
and also reset the count to 0   
 */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string decoder(string s,int n){
    string res="";
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1') count++;
        if(s[i]=='0' || i==n-1){
            res+=('A'+count -1);
            count=0;
        }
    }
    return res;
}

int main(){
    string s;
    cin>>s;
    string res= decoder(s,s.size());
    cout<<res<<endl;
    return 0;
}