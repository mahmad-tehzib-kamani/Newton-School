/*Problem Statement
Abhas likes to play with numbers. He is given integers N and K. Find the number of triples (a, b, c) of positive integers not greater than N such that a+b, b+c, and c+a are all multiples of K. The order of a, b, and c does matter, and some of them can be the same.

Input
The input line contains N and K separated by space.

Output
Print the number of triples (a, b, c) of positive integers not greater than N such that a+b, b+c, and c+a are all multiples of K.*/

//Solution
#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;


int main() {
	// Your code here
    long long int N,K,a,b;
    cin>>N>>K;
    a=N/K;
    if(K%2==0)
    {
        b = (N+(K/2))/K;
        cout<<((a*a*a)+(b*b*b));
    }
    else
    {
        cout<<a*a*a;
    }
    return 0;
}
