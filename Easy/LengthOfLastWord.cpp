#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int lenOfLastWord(string s){
    stringstream ss(s);
    string word;
    int count;
    while(ss >> word){
        count = word.size();
    }
    return count;
}

int main(){
    string s;
    getline(cin, s);
    cout << lenOfLastWord(s);
}