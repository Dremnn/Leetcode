#include <iostream>
#include <string>

using namespace std;

int reverseInterger(int x){
    string s = to_string(x);
    string result = "";
    if(s[0] != '-'){
        result = "0";
        for(int i = s.size() - 1; i >= 0; i--){
            result += s[i];
        }
    }
    else{
        result = "-";
        for(int i = s.size() - 1; i > 0; i--){
            result += s[i];
        }
    } 
    try{
        return stoi(result);
    }
    catch(exception& e){
        // cerr << e.what();
        return 0;
    }

}

int main(){ 
    int x;
    cin >> x;
    
    cout << reverseInterger(x);
    return 0;
}