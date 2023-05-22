/*Problem Statement
There are A Bacterias.
Each time Jerry shouts, the bacterias multiply by K times.
In order to have B or more slimes, at least how many times does Jerry need to shout?

Input
Input is given from Standard Input in the following format:
A B K

Output
Print the answer.*/

//Solution
#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int A,B,K;
    cin>>A>>B>>K;
    int z=B-A;
    int cnt=0;
    for(int i=0; i<z; i++)
    {
        A=A*K;
        if(A>=B)
        {
            cnt++;
            break;
        }
        else
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
