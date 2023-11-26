/*



The Binary number system only uses two digits, 0 and 1 and number system can be called binary string. You are required to implement the following function:

int OperationsBinaryString(char* str);

The function accepts a string str as its argument. The string str consists of binary digits eparated with an alphabet as follows:

– A denotes AND operation
– B denotes OR operation
– C denotes XOR Operation
You are required to calculate the result of the string str, scanning the string to right taking one opearation at a time, and return the same.

Input Format

A single line of string which contains binary digits separated by space.

Constraints

No order of priorities of operations is required
Length of str is odd
If str is NULL or None (in case of Python), return -1

Output Format

A final integer value which is the result of AND ,OR ,XOR opertions among binary digits.

Sample Input 0

1C0C1C1A0B1
Sample Output 0

1

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int operationbinarystring(string s){
    int r=int(s[0])-48;
    int value2;
    for(int i=1;i<s.length()-1;i+=2){
        value2 = int(s[i+1])-48;
        switch(s[i]){
            case 'A':
                r=r&value2;
                break;
            case 'B':
                r=r|value2;
                break;
            case 'C':
                r=r^value2;
                break;
        }
    }
    return r;
}

int main() {
    string s;
    cin>>s;
    if(s.length()==0){
        cout<<"-1";
    }
    else
    {
        cout<<operationbinarystring(s);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
