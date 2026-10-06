#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool palindromeCheck(int num){
    string s = to_string(num);
    int l = 0;
    int r = s.size() - 1;
    for (int i = l; i <= r; i++){
        if(s[l] == s[r]){
            l++;
            r--;
        }
        else return false;
    }
    return true;
}

int main(){
    int i;
    cin >> i;
    if(palindromeCheck(i)) cout << "dung roi thang lon";
    else cout << "sai roi ngu lom'";
    return 0;
}
