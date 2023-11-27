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
