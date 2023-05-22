Problem Statement
You are given strings S and T consisting of lowercase English letters. Determine whether T is a (contiguous) substring of S.

A string Y is said to be a (contiguous) substring of X if and only if Y can be obtained by performing the operation below on X zero or more times.

Do one of the following.
i) Delete the first character in X.
ii) Delete the last character in X.
For instance, the tag is a (contiguous) substring of voltage, while ace is not a (contiguous) substring of atcoder.

Input
The input is given from Standard Input in the following format:
S
T

Output
If T is a (contiguous) substring of S, print Yes; otherwise, print No.*/

//Solution
#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s,t;
    cin>>s>>t;
    int a=s.length();
    int b=t.length();
    if(a<b){
        cout<<"No\n";
    }
    else{
        if(s.find(t)==string::npos)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }
    }
    
    return 0;
}
