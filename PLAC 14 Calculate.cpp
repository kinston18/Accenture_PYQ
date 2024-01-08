/*

You are required to implement the following function:

Int Calculate(int m, int n);

The function accepts 2 positive integer ‘m’ and ‘n’ as its arguments.You are required to calculate the sum of numbers divisible both by 3 and 5, between ‘m’ and ‘n’ both inclusive and return the same.

Input Format

Line 1 accepts an integer value for variable m
Line 2 accepts an integer value for variable n

Constraints

0 < m <= n
if no such values are found return 0

Output Format

An integer value which is the sum of sum of numbers divisible both by 3 and 5, between ‘m’ and ‘n’.

Sample Input 0

12
50
Sample Output 0

90

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int calculate(int m,int n){
    int sum=0;
    for(int i=m;i<=n;i++){
        if(i%3==0 && i%5==0)
            sum += i;
    }
    return sum;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int m,n;
    cin>>m;
    cin>>n;
    cout<<calculate(m,n);
    return 0;
}
