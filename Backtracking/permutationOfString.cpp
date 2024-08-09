#include <bits/stdc++.h>
using namespace std;
void solve(string& temp, vector<string>& ans, int i) {
    if (i == temp.size()) {
        ans.push_back(temp);
        return;
    }
    for (int j = i; j < temp.size(); j++) {
        swap(temp[i], temp[j]);   
        solve(temp, ans, i + 1); 
        swap(temp[i], temp[j]);   
    }
}
int main() {
    string temp = "xyz";
    vector<string> ans;
    solve(temp, ans, 0);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
