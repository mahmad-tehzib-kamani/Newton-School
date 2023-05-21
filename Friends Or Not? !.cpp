/*Problem Statement
The students of Newton School threw a grand party to celebrate their hard work and achievements. They danced and sang the night away, enjoying delicious food and creating memories that would last a lifetime.
There are N guests in the party and N-1 relationships are given. The guests are numbered 1, 2, N. The ith relationship depicts that guest ai and guest bi are friends.
Determine whether a guest exists or not who is a friend of all other guests.
Here, we only consider direct friendship.
Input
Input is given from Standard Input in the following format:
N
a1 b1
a2 b2
a3 b3
.
.
an-1 bn-1

Output
If a guest exists or who is a friend of all other guests, print "Yes" else print "No".*/

//Solution
#include <bits/stdc++.h> 
using namespace std;

bool solve(vector<vector<int>> &adj, int n){
    for(auto ele : adj){
        if(ele.size() == n-1)
            return true;
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    vector<vector<int>> adj(n+1);
    int u,v;
    for(int i=1; i<n; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool ans = solve(adj,n);
    if(ans)
        cout << "Yes";
    else 
        cout << "No";
    return 0;
}
