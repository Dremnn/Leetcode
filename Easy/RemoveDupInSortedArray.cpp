#include <iostream>
#include <vector>

using namespace std;

int removeDuplicate(vector<int>& s){
    int count = 0;

    for(int i = 0; i < s.size(); i++){
        for(int j = i + 1; j < s.size();){
            if(s[i] == s[j]){
                s.erase(s.begin() + j);
            }
            else break;
        }
        count++;
    }

    return count;
}

int main(){
    vector<int> s;
    int x;
    while(cin >> x){
        s.push_back(x);
    }

    int k = removeDuplicate(s);
    cout << k << "\n";


    for(auto x : s){
        cout << x << " ";
    }

    return 0;
}