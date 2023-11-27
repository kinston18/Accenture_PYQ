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
