#include <iostream>
#include <string>

using namespace std;

string LongestPalin(string& s){
    int left;
    int index;
    int cnt = 0;
    string result;

    for(int i = 0; i < s.size(); i++){
        left = i;
        bool check = false;
        int count = 0;
        for(int right = s.size() - 1; right >= 0; right--){
            if(left == right){
                count++;
                check = true;
                break;
            }

            if(left > right){
                check = true;
                break;
            }

            if(s[left] == s[right]){
                left++;
                count += 2;
            }
            else{
                left = i;
                right += (count / 2);
                count = 0; 
            }
        }

        if(check){
            if(cnt < count){
                cnt = count;
                index = i;
            } 
        }
    }

    int tmp = 0;
    for(int i = index; i < s.size(); i++){
        if(tmp == cnt) break;
        result += s[i];
        tmp++;    
    }

    return result;
}

int main(){
    string s;
    cin >> s;
    
    cout << LongestPalin(s);

    return 0;
}