#include <iostream>
#include <string>

using namespace std;

int romanValue(char s){
    if(s == 'I') return 1;
    else if(s == 'V') return 5;
    else if(s == 'X') return 10;
    else if(s == 'L') return 50;
    else if(s == 'C') return 100;
    else if(s == 'D') return 500;
    else if(s == 'M') return 1000;
    else return 0;
}

int romanToInt(string s){
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        if(romanValue(s[i]) < romanValue(s[i+1])) sum -= romanValue(s[i]);
        else sum += romanValue(s[i]);
    }
    return sum;
}

int main(){
    string s;
    cin >> s;

    cout << romanToInt(s);
    return 0;
}