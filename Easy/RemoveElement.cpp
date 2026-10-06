#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& s, int val){
    int count = 0;
    for(int i = 0; i < s.size();){
        if(s[i] == val){
            s.erase(s.begin() + i);
        }
        else{
            count++;
            i++;
        } 
    }
    return count;
}

int main(){
    vector<int> s;
    int value;

    cout << "nhap value di cu em:" << "\n";
    cin >> value;

    int x;
    cout << "nhap mang di cu em:" << "\n";
    while(cin >> x){
        s.push_back(x);
    }

    int k = removeElement(s, value);
    cout << k << "\n";


    for(auto x : s){
        cout << x << " ";
    }

    return 0;
}