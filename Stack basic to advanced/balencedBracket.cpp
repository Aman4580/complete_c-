#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "()(()())()()(())";
    stack<char> st;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(') {
            st.push('(');
        } else if (str[i] == ')') {
            if (!st.empty() && st.top() == '(') {
                st.pop();
            } else {
                cout << "Not Valid parenthesis" << endl;
                return 0;
            }
        }
    }

    if (st.empty()) {
        cout << "Valid parenthesis" << endl;
    } else {
        cout << "Not Valid parenthesis" << endl;
    }

    return 0;
}
