/*

    Implement the following functions.a

char*MoveHyphen(char str[],int n);

The function accepts a string “str” of length ‘n’, that contains alphabets and hyphens (-). Implement the function to move all hyphens(-) in the string to the front of the given string.

Input Format

A string which contains alphabets and hyphens.

Constraints

Return null if str is null

Output Format

A new string by moving all hyphens into front.

Sample Input 0

Move-Hyphens-to-Front
Sample Output 0

---MoveHyphenstoFront

    */


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string movehyphen(string s,int n){
    string res="";
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='-')
            count++;
        else
            res=res+s[i];
    }
    while(count>=1){
        res = "-" + res;
        count--;
    }
    return res;
}

int main() {
    string s;
    cin>>s;
    cout<<movehyphen(s,s.length());
    
    return 0;
}
