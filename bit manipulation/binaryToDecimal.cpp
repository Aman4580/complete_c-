#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cout << "Enter a binary number string: ";
    cin >> s;
    int sum = 0;
    int j = s.size() - 1;
    int i = 0;
    while (j >= 0) {
        int n = (s[j]-'0');
        sum += n * pow(2, i);
        i++;
        j--;
    }
    
    cout << sum << endl;
    return 0;
}
