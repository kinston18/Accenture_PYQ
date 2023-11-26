/*


Implement the following Function

def ProductSmallestPair(sum, arr)

The function accepts an integers sum and an integer array arr of size n. Implement the function to find the pair, (arr[j], arr[k]) where j!=k, Such that arr[j] and arr[k] are the least two elements of array (arr[j] + arr[k] <= sum) and return the product of element of this pair

Input Format

Line 1 accepts 'sum'
Line 2 accepts size of array
Line 3 accepts values for array

Constraints

Return -1 if array is empty or if n<2
Return 0, if no such pairs found
All computed values lie within integer range
Output Format

An integer value which is king

Sample Input 0

9
7
5 2 4 3 9 7 1
Sample Output 0

2
Explanation 0

Pair of least two element is (2, 1) 2 + 1 = 3 < 9, Product of (2, 1) 2*1 = 2. Thus, output is 2

*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solve(int arr[], int n, int sum){
    sort(arr,arr+n);
    if (arr[0] + arr[1]<=sum)
        return arr[0]*arr[1];
    else
        return 0;
    
}

int main() {
    int sum,n;
    cin>>sum;
    cin>>n;
    if(n==0)
    {   
        cout<<"-1";
        return 0;
    }
    else if(n<2)
    {
        cout<<"0";
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<solve(arr,n,sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
