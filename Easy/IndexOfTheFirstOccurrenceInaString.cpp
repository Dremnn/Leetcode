#include <iostream>
#include <string>

using namespace std;

int strStr(string haystack, string needle){
    if(needle.size() > haystack.size()) return -1;

    for(int i = 0; i < haystack.size() - needle.size() + 1; i++){
        string temp = "";
        for(int j = i; j < i + needle.size(); j++){
            temp += haystack[j];
        }
        if(temp == needle){
            return i;
        }
    }
    return -1;
}

int main(){
    string haystack;
    cin >> haystack;

    string needle;
    cin >> needle;

    cout << strStr(haystack, needle);
    return 0;
}