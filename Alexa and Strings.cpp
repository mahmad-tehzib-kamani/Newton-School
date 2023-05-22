/*Problem Statement
Alexa loves to play with strings. She is given a string S consisting of lowercase English letters.
If 'a' appears in S, print the last index at which it appears; otherwise, print −1. (The index starts at 1. )

Input
The input contains only one string.
S

Output
Print the answer.*/

//Solution
#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int temp=-1, len, i;
    char s[1000];
    cin>>s;
    len = strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]=='a')
        temp=i+1;
    }
    cout<<temp;
    return 0;
}
