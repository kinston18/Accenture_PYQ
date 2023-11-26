/*

The function accepts two positive integers ‘r’ and ‘unit’ and a positive integer array ‘arr’ of size ‘n’ as its argument ‘r’ represents the number of rats present in an area, ‘unit’ is the amount of food each rat consumes and each ith element of array ‘arr’ represents the amount of food present in ‘i+1’ house number, where 0 <= i

Input Format

Line 1 accepts Number of rats i.e 'r'
Line 2 accepts amount of food for each rat i.e. 'unit'
Line 3 accepts Number of houses{size of an array} i.e 'n'
Line 4 accepts number of food units in each house(n integer values seperated by space)

Constraints

Computed values lie within the integer range.

Output Format

Return minimum number of houses required{in a continous order} to fill all rats stomach.
Return -1 if the array is null
Return 0 if the total amount of food from all houses is not sufficient for all the rats.

Sample Input 0

7
2
8
2 8 3 5 7 4 1 2
Sample Output 0

4
Explanation 0

r: 7
unit: 2
n: 8
arr: 2 8 3 5 7 4 1 2

Total amount of food required for all rats = r * unit 
                                           = 7 * 2
                                           = 14

The amount of food in 1st houses = 2+8+3+5 = 18. Since, amount of food in 1st 4 houses is sufficient for all the rats. Thus, output is 4.
Sample Input 1

11
3
5
1 2 3 4 5
Sample Output 1

0
Explanation 1

Their is insufficient food for rats.

Sample Input 2

20
3
0
Sample Output 2

-1
Explanation 2

Array is null

*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solve(int arr[],int n, int r, int unit){
    int rf = r*unit, nb=0,cf=0;
    for(int i=0;i<n;i++){
        if(cf<rf){
            cf=cf+arr[i];
            nb++;
        }
        else{
            break;
        }
    }
    if(cf>=rf)
        return nb;
    else
        return 0;
}

int main() {
    int r, unit, n;
    cin>>r;
    cin>>unit;
    cin>>n;
    if(n<=0){
        cout<<"-1";
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<solve(arr,n,r,unit);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

