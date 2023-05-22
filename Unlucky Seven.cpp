/*Problem Statement
Mahi hates the number 7.
We are interested in integers without the digit 7 in both decimal and octal. How many such integers are there between 1 and N (inclusive)?

Input
Input is given from Standard Input in the following format:
N

Output
Print an integer representing the answer.*/

//Solution
#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,count=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        int decimal=i;
        int octal=i;
        bool decimalwithseven=false;
        bool octalwithseven=false;
        while(decimal>0)
        {
            if(decimal%10==7)
            {
                decimalwithseven=true;
                break;
            }
            decimal/=10;
        }
        while(octal>0)
        {
            if(octal%8==7)
            {
                octalwithseven=true;
                break;
            }
            octal/=8;
        }
        if(!(decimalwithseven || octalwithseven))
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
