/*Problem Statement
You are given two strings S and T. Determine whether it is possible to make S and T equal by doing the following operation at most once:
Choose two adjacent characters in S and swap them.
Note that it is allowed to choose not to do the operation.

Input
The input line contains two strings in separate lines.

Output
If it is possible to make S and T equal by doing the operation in Problem Statement at most once, print Yes; otherwise, print No.*/

//Solution

#include <bits/stdc++.h>
using namespace std;

int main() {
	// Your code here
    string S,T;
    cin>>S>>T;
    int count=0;
    int n = S.length();
    for(int i=0;i<n-1; i++)
    {
        if(S[i] == T[i] || S[i] == T[i+1])
            count++;
    }
    if(count == n-1)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
