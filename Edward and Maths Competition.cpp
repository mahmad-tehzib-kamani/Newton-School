/*Problem Statement
Edward participated in one maths competition. He was asked to find the number of ways to choose a pair of an even number and an odd number from the positive integers between 1 and N (inclusive). The order does not matter.

Input
The input line contains only one input N.

Output
Print the number of ways to choose a pair of an even number and an odd number from the positive integers between 1 and N (inclusive).*/

//Solution
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int even=n/2;
    int odd=n-even;
    cout<<even*odd<<endl;
    return 0;
}
