/*Problem Statement
Bob is at the origin of a number line. He wants to reach a goal at coordinate X.
There is a wall at coordinate Y, which Bob cannot go beyond at first. However, after picking up a hammer at coordinate Z, he can destroy that wall and pass through.
Determine whether Bob can reach the goal. If he can, find the minimum total distance he needs to travel to do so.
Input
The input is given from Standard Input in the following format:
X Y Z

Output
If Bob can reach the goal, print the minimum total distance he needs to travel to do so. If he cannot, print -1 instead.*/

//Solution
#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int x,y,z;
    cin>>x>>y>>z;
    if(x<0)
    {
        x=-x;
        y=-y;
        z=-z;
    }
    if(x<y || y<0)
    {
        cout<<x<<endl;
    }
    else if(y<z)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<abs(z)+abs(x-z)<<endl;
    }
    return 0;
}
