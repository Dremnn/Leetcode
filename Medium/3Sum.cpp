#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& s){
    vector<vector<int>> res;

    sort(s.begin(), s.end());
    for(int i = 0; i < (int)s.size(); i++){
        if(i > 0 && s[i] == s[i - 1]) continue;

        int left = i + 1;
        int right = s.size() - 1;
        while(left < right){
            int sum = s[i] + s[left] + s[right];
            if(sum < 0){
                left++;
            }
            else if(sum > 0){
                right--;
            }
            else{
                res.push_back({s[i], s[left], s[right]});

                while(left < right && s[left] == s[left + 1]) left++;
                while(left < right && s[right] == s[right - 1]) right--;

                left++;
                right--;
            }
        }
    }

    return res;
}

int main(){
    int x;
    vector<int> s;
    while(cin >> x) s.push_back(x);

    vector<vector<int>> c = threeSum(s);
    for(auto i : c){
        for(auto j : i){
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}