#include <iostream>
#include <string>

using namespace std;

char romanSymbol(int s){
    if(s == 1) return 'I';
    else if(s == 5) return 'V';
    else if(s == 10) return 'X';
    else if(s == 50) return 'L';
    else if(s == 100) return 'C';
    else if(s == 500) return 'D';
    else if(s == 1000) return 'M';
    else return 0;
}

string intTORoman(int s){
    int remaining = 1000;
    string result = "";
    while(remaining != 0){
        int currNum = (s / remaining) * remaining;

        if(currNum == 0){
            continue;
        }

        if(currNum % 5 == 0) result += romanSymbol(currNum); 
        
    }
    return 0;
}


int main(){
    int s;
    cin >> s;

    // cout << intTORoman(s);
    cout << (414 / 1000) * 1000;
    return 0;
}