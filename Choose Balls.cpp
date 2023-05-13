/*Choose Balls

Problem Statement
We have N+M balls, each of which has an integer written on it.
It is known that:
1) The numbers written on the N of the balls are even.
2) The numbers written on the M of the balls are odd.
Find the number of ways to choose two of the N+M balls (disregarding order) so that the sum of the numbers written on them is even.

Input
The first and the only line of the input contains 2 space separated integers, N and M

Output
Print the answer*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	cout<<n*(n-1)/2+m*(m-1)/2;
	return 0;
}
