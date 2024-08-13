#include <iostream>
#include <vector>

using namespace std;

void findNumbers(int k, int targetSum, int start, vector<int>& combination, vector<vector<int>>& results) {
    // Base case: If we have selected k numbers
    if (k == 0) {
        if (targetSum == 0) {
            results.push_back(combination);
        }
        return;
    }

    // Try every number in the range from 'start' to 1000
    for (int i = -1000; i <= 1000; ++i) {
        // To avoid using the same number multiple times, ensure that each number is used only once
        if (find(combination.begin(), combination.end(), i) == combination.end()) {
            combination.push_back(i);
            findNumbers(k - 1, targetSum - i, i + 1, combination, results);
            combination.pop_back();  // Backtrack
        }
    }
}

int main() {
    int k = 8; // Finding 8 numbers
    int targetSum = -40;
    vector<int> combination;
    vector<vector<int>> results;

    findNumbers(k, targetSum, -1000, combination, results);

    cout << "Combinations that sum to " << targetSum << ":\n";
    for (const auto& combination : results) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}
