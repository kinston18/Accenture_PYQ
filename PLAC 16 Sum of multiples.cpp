#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solve(int n){
    int r,sum=0;
    for(int i=0;i<=10;i++){
        r = n*i;
        sum += r;
    }
    return sum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    cout<<solve(n);
    
    
    return 0;
}
