/*Problem Statement
Emily was playing with triplets. She was excited to find out how many triples of non-negative integers (a, b, c) satisfy a+b+c≤S and a×b×c≤T, where S & T are non-negative integers.

Input
The input line contains S, and T separated by space.

Output
Print the number of triples of non-negative integers (a, b, c) satisfying the conditions.*/

//Solution
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,k,S,T;
    int a=0;
    scanf("%d %d",&S,&T);
    for(i=0;i<=S;i++)
    {
        for(j=0;j<=S;j++)
        {
            for(k=0;k<=S;k++)
            {
                if((i+j+k)<=S && (i*j*k)<=T)
                    a++;
            }
        }
    }
    printf("%d",a);
    return 0;
}
