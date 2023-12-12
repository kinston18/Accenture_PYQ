/*
You are required to implement the following function.

Int OperationChoices(int c,int a , int b )

The function accepts 3 positive integers ‘a’ , ‘b’ and ‘c ‘ as its arguments. Implement the function to return.
( a + b ) , if c=1
( a – b ) , if c=2
( a * b ) , if c=3
(a / b) , if c =4

Input Format

Line 1 accepts an integer value of c i.e operation
Line 2 accepts an integer value of a i.e operand-1
Line 3 accepts an integer value of b i.e operand-2
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int operationchoices(int c,int a,int b){
    int r =0;
    switch(c){
        case 1:
            r=a+b;
            break;
        case 2:
            r = a-b;
            break;
        case 3:
            r=a*b;
            break;
        case 4:
            r=a/b;
            break;
    }
    return r;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,c;
    cin>>c;
    cin>>a;
    cin>>b;
    cout<<operationchoices(c,a,b);
    return 0;
}
