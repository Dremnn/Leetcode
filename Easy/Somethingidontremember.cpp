#include <bits/stdc++.h>
using namespace std;

void func(string input, int left, int right){
    if (left == right){
        cout << input << " ";
        return;
    } 

    for(int i = left; i <= right; i++){
        swap(input[left], input[i]);

        func(input, left + 1, right);

        swap(input[left], input[i]);
    }

}

int main(){

    string input;
    cin >> input;

    int left = 0;
    int right = input.size() - 1;

    func(input, left, right);
    return 0;
}
