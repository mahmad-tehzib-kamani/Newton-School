/*Problem Statement
You are given a sequence of length N consisting of integers:
A=(A1, A2,...., AN)
Find the smallest non-negative integer not in (A1, A2,....,AN).

Input
The input contains N and elements of sequence separated by a new line.
N
A1, A2,. , AN

Output
Print the answer.*/

//Solution
#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    unordered_set<int> set;
    for(int i=0;i<n;i++)
    {
        set.insert(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(set.find(i)==set.end())
        {
            cout<<i<<endl;
            return 0;
        }
    }

    return 0;
}
