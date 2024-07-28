#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "He is bit slow";
    string str = "";
    string str1 = "";
    string str2 = s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    map<string, int> mp;

    stringstream ss(s);
    string word;
    while (ss >> word) {
        mp[word]++;
    }

    for (const auto& entry : mp) {
        str = entry.first;
        break;
    }
    stringstream sstr(str2);
    string word1;
    while (sstr >> word1) {
        if (word1 == str) {
            cout << str << endl;
            exit(0);
        }

    }
    str[0] = toupper(str[0]);
    cout << str << endl;
    return 0;
}
