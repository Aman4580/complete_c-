#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    vector<int> input(n);
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    sort(input.begin(),input.end());
    map<int, int> mp; 
    for(int i = 0; i < n; i++) {
        if (input[i] == -1) continue;
        mp[input[i]]++; 
        for(int j = i + 1; j < n; j++) {
            if (input[j] == -1) continue;
            string s1 = to_string(input[i]);
            string s2 = to_string(input[j]);
            if(s1.size() == s2.size()) { 
                sort(s1.begin(), s1.end());
                sort(s2.begin(), s2.end());
                if(s1 == s2) {
                    mp[input[i]]++;  
                    input[j] = -1; 
                }
            }
        }
    }
    for(auto it : mp) {
        cout << it.first << " : " << it.second << endl;
    }
    return 0;
}
