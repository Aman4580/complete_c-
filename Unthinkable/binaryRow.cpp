#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Input the number of binary strings

    unordered_map<string, int> count_map;  // Hashmap to store frequency of binary strings
    
    // Input the binary strings and store their frequency in the hashmap
    for (int i = 0; i < n; i++) {
        string binary;
        cin >> binary;  // Input a binary string
        count_map[binary]++;  // Increment the frequency of this binary string
    }
    
    // Find and print the binary string that appears only once
    for (auto& entry : count_map) {
        if (entry.second == 1) {
            cout << entry.first << endl;  // Output the unrepeated binary string
            break;  // Exit after finding the first unrepeated string
        }
    }

    return 0;
}
