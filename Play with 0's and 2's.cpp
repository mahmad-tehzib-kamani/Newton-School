/*Problem Statement
Alexa Loves to play with 0's and 2's. Among the positive integers that consist of 0's and 2's when written in base 10, he wanted to find the Kth smallest integer. Help him find that.

Input
Input is given from Standard Input in the following format:

Output
Print the answer as an integer.
Here, the exact value must be printed as an integer, even if it is big. Unnecessary leading zeros such as 0523 are not allowed.*/

//Solution
#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    // Your code here
    long a;
    cin>>a;
    long i=0;
    long res[64];
    while(a>0){
        res[i]=a%2;
        a=a/2;
        i++;
    }
    for(int j=i-1; j>=0; j--)
        cout<<2*res[j];

    return 0;
}
