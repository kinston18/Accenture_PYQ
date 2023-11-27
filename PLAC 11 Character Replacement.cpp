/*

    You are given a function,

Void *ReplaceCharacter(Char str[], int n, char ch1, char ch2);

The function accepts a string ‘ str’ of length n and two characters ‘ch1’ and ‘ch2’ as its arguments . Implement the function to modify and return the string ‘ str’ in such a way that all occurrences of ‘ch1’ in original string are replaced by ‘ch2’ and all occurrences of ‘ch2’ in original string are replaced by ‘ch1’.

Input Format

Line 1 accepts value of string str
Line 2 accepts value of ch1
Line 2 accepts value of ch2

Constraints

String Contains only lower-case alphabetical letters.
Return null if string is null.
If both characters are not present in string or both of them are same , then return the string unchanged.
Output Format

A string which could be modified or not otherwise null

Sample Input 0

apples
a
p
Sample Output 0

paales

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string replacechar(string s, char ch1,char ch2){
    for(int i=0;i<s.length();i++){
        if(s[i]==ch1)
            s[i]=ch2;
        else if(s[i]==ch2)
            s[i]=ch1;
    }
    return s;
}

int main() {
    string s;
    char ch1,ch2;
    cin>>s;
    cin>>ch1;
    cin>>ch2;
    cout<<replacechar(s,ch1,ch2);
    return 0;
}
