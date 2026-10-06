#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& s){
    
    int minStrLen = INT_MAX;
    int maxPrfLen = 0;
    string result = "";
    for(int i = 0; i < s.size(); i++){
        int tmp = s[i].size();
        minStrLen = min(minStrLen, tmp);
    }

    for(int i = 0; i < minStrLen; i++){
        char idxChar = s[0][i];
        bool check = true;

        for(int j = 0; j < s.size(); j++){
            if (s[j][i] != idxChar){
                check = false; 
                break;
            }
        }

        if(check) maxPrfLen++;
        else break;
    }

    if(maxPrfLen == 0) return result;
    else{
        for(int i = 0; i < maxPrfLen; i++){
            result += s[0][i];
        }
    }    
    return result;
}

int main(){
    vector<string> s ;
    string x;
    while(cin >> x){
        s.push_back(x);
    }

    cout << longestCommonPrefix(s);
}