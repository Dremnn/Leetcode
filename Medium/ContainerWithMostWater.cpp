#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int>& s){
    int left = 0;
    int right = s.size() - 1;
    int result = 0;

    while(left < right){
        int currHeight = min(s[left], s[right]);
        int currWidth = right - left;
        int currArea = currHeight * currWidth;

        result = max(result, currArea);

        if(s[left] > s[right]) right--;
        else left++;
    }

    return result;
}


int main(){
    vector<int> s;
    int x;
    while(cin >> x) s.push_back(x);

    cout << maxArea(s);

    return 0;
}