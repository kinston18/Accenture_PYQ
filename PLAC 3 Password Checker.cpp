/*

You are given a function.
int CheckPassword(char str[], int n);

The function accepts string str of size n as an argument. Implement the function which returns 1 if given string str is valid password else 0.

str is a valid password if it satisfies the below conditions.

– At least 4 characters
– At least one numeric digit
– At Least one Capital Letter
– Must not have space or slash (/)
– Starting character must not be a number

Input Format

A single line which contains password in string format

Constraints

Input string will not be empty.

Output Format

1 if password is valid, otherwise 0

Sample Input 0

aA1_67
Sample Output 0

1

  */

#include <iostream>
using namespace std;

int checkpassword(string s, int len) {
    if (len < 4 || (s[0] >= '0' && s[0] <= '9')) {
        return 0;
    }

    int cap = 0, num = 0, flag = 0, res = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            num = 1;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            cap = 1;
        } else if (s[i] == ' ' || s[i] == '/') {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        res = 0;
    } else if (cap != 0 && num != 0) {
        res = 1;
    }

    return res;
}

int main() {
    string s;
    cin >> s;

    int result = checkpassword(s, s.length());

    if (result == 1) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}


