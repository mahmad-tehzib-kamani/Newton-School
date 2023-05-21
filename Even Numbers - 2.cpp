/*Problem Statement
Newton loves EVEN numbers.
You are given two integers N and M. Generate 5 unique even numbers for Newton between N and M (excluding both).

Input
The first and only line of input contains integer N and integer M.

Output
The only line of output contains 5 singly spaced integers satisfying the constraints.*/

//Solution
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,M,count=0;
    cin>>N>>M;
    for(int i=N+1; i<M; i++)
    {
        if(i%2==0)
        { 
            cout<<i<<" ";
            count++;
        }
        if(count==5)
            break;
    }
    return 0;
}
