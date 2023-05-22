/*Problem Statement
There was an exam consisting of three problems worth 1, 2, and 4 points.
Alexa, Edward, and Bob took this exam. Alexa scored A points, and Edward scored B points.
Bob solved all of the problems solved by at least one of Alexa and Edward and failed to solve any of the problems solved by, neither of them.
Find Bob's score.
It can be proved that Bob's score is uniquely determined under the Constraints of this problem.

Input
The input contains two integers separated by a space
A B

Output
Print Bob's score as an integer.*/

//Solution
#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a, b;
    cin>>a>>b;
    cout<<(a|b)<<endl;
    return 0;
}
