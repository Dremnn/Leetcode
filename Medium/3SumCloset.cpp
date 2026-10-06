#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int threeSumcloset(vector<int>& s, int target){
    sort(s.begin(), s.end());
    int res = INT_MAX;
    int left, right;
    int minDistance;

    for(int i = 0; i < s.size(); i++){
        if(i != s.size() - 1)
        left = i + 1;
        right = (int)s.size() - 1;

        while(left > right){
            int sum = s[i] + s[left] + s[right];
            if(target - sum < 0) left++;
            else if(target - sum > 0) right++;
            else{
                return sum;
            }  
            
        }
    }
    return res;
}

int main(){
    int target;
    cin >> target;
    vector<int> s;
    int x;
    while(cin >> x) s.push_back(x);

    cout << threeSumcloset(s, target);

    return 0;
}