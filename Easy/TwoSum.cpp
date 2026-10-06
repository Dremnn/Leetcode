#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> twoSum(vector<int>& s, int target){
    map<int, int> m;

    for(int i = 0; i < s.size(); i++){
        if(m.contains(target - s[i])) return {i, m[target - s[i]]};

        m[s[i]] = i;
    }

    return {};
}

int main(){
    int target;
    cin >> target;
    int x;
    vector<int> s;
    while(cin >> x) s.push_back(x);

    vector<int> c = twoSum(s, target);
    for(auto i : c) cout << c[i] << " ";
}