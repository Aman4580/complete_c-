#include <bits/stdc++.h>
using namespace std;

void findNumbers(int k, int targetSum, int start, vector<int>& combination, vector<vector<int>>& results) {
    if (k == 0) {
        if (targetSum == 0) {
            results.push_back(combination);
        }
        return;
    }

    // Try numbers within a reasonable range
    for (int i = start; i <= 100; ++i) {
        combination.push_back(i);
        findNumbers(k - 1, targetSum - i, i + 1, combination, results);
        combination.pop_back();  // Backtrack
    }
}

int main() {
    int k = 8; // Finding 8 numbers
    int targetSum = -40;
    vector<int> combination;
    vector<vector<int>> results;

    // Use a smaller range close to the target sum
    findNumbers(k, targetSum, -100, combination, results);

    if (!results.empty()) {
        cout << "Combinations that sum to " << targetSum << ":\n";
        for (const auto& combination : results) {
            for (int num : combination) {
                cout << num << " ";
            }
            cout << "\n";
        }
    } else {
        cout << "No combinations found.\n";
    }

    return 0;
}
