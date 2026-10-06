#include  <iostream>
#include  <vector>

using namespace std;

int binarySearch(vector<int>& s, int target){
        int left = 0;
        int right = s.size() - 1;
        int mid;

        if(s[0] > target) return 0;
        
        while(left  <= right){
            mid = (left + right) / 2;
            if(s[mid] == target) return mid;
            else if(s[mid] > target) right = mid - 1;
            else left = mid + 1;
        }
        if(s[mid] > target) return mid - 1;
        else return mid + 1;
}

int main(){
    int t;
    cin >> t;
    cout << "ditme" << "\n";
    vector<int> s;
    int x;
    while(cin >> x) s.push_back(x);

    cout << binarySearch(s, t);

    return 0;
}