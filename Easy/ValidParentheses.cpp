#include <iostream>
#include <string>

using namespace std;

bool isValid(string s){
    if(s.empty()) return true;

    bool check = false;
    for(int i = 0; i < (int)s.size() - 1;){
            if(s[i] == '(' && s[i + 1] == ')'){
                s.erase(i, 2);
                check = true;
                if(i > 0) i--;
            }
            else if(s[i] == '{' && s[i + 1] == '}'){
                s.erase(i, 2);  
                check = true;
                if(i > 0) i--;
            }
            else if(s[i] == '[' && s[i + 1] == ']'){
                s.erase(i, 2);
                check = true;
                if(i > 0) i--;
            }
            else i++;
    }

    if(!check) return false; 
    return isValid(s);
}

int main(){
    string s;
    cin >> s;
    if(isValid(s)) cout << "juan roi cu em";
    else cout << "ngu lom'";
    return 0;
}