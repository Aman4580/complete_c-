#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;  // Input the string

    // Loop through the string in pairs
    for (int i = 0; i < s.length() - 1; i += 2) {
        // Swap adjacent characters
        swap(s[i], s[i + 1]);
    }

    cout << s << endl;  // Print the modified string

    return 0;
}
