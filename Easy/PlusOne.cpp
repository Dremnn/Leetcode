#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& s){
    s[s.size() - 1]++;
    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] > 9){
            s[i] = 0;
            if(i - 1 < 0)    
                s.insert(s.begin(), 1); 
            else    
                s[i - 1]++;
        }
        else{
            break;
        }
    }
    return s;
}

int main(){
    vector<int> s;
    int x;
    while(cin >> x){
        s.push_back(x);
    }

    s = plusOne(s);

    for(int i = 0; i < s.size(); i++){
        cout << s[i] << " ";
    }

    return 0;
}