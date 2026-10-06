#include <iostream>
#include <string>

using namespace std;

int myStoi(string s){
    int result = 0;
    for(char c : s){
        if(c == '-') continue;
        result = result * 10 + (c - '0');
    }

    if(s[0] == '-') result *= -1;
    return result;
}

#include <climits>

int myAtoi(string s) {
    int i = 0;
    while (i < s.size() && s[i] == ' ') i++;

    int sign = 1;
    if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
        if (s[i] == '-') sign = -1;
        i++;
    }

    long long result = 0;
    long long limit = (sign == 1) ? INT_MAX : 2147483648LL;

    while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';

        if (result > (limit - digit) / 10) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + digit;
        i++;
    }

    return static_cast<int>(sign * result);
}

int main(){
    string s;
    cin >> s;

    cout << myAtoi(s);

    // cout << myStoi(s);
}