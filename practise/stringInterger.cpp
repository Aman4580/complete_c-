#include <iostream>
using namespace std;

int main() {
    int p = 0; // Initialize p to 0
    string s = "iiii";
    
    for (int i = 0; i < s.size(); i++) {
        p += int(s[i]) - 96;
    }
    
    cout << p << endl;
    
    return 0;
}
