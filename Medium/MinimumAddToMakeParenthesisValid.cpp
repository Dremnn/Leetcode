#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int minAddToMakeValid(string s){
    stack<int> st;

    for(auto c : s){
        if(c == '(')    
            st.push(c);
        else{
            if(!st.empty() && st.top() == '(') 
                st.pop();
            else
                st.push(c);
        } 
    }

    return st.size();
}

int main(){
    string s;
    cin >> s;

    cout << minAddToMakeValid(s);
    return 0;
}