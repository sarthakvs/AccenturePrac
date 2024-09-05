/*
Question:
Distance d is given to you find area pi*d*d
Solution:
calculate area = pi*d*d
 */

#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int d;
    cin>>d;
    float res= 3.14*d*d;
    cout<<(int)res<<endl;
    return 0;
}