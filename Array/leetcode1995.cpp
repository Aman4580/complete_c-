#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        long long totalSum = 0;
        int minAbsValue = INT_MAX;
        int negativeCount = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                totalSum += abs(matrix[i][j]);
                if (matrix[i][j] < 0) {
                    negativeCount++;
                }
                minAbsValue = min(minAbsValue, abs(matrix[i][j]));
            }
        }

        if (negativeCount % 2 != 0) {
            totalSum -= 2 * minAbsValue;
        }

        return totalSum;
    }
};

int main() {
    // Example input
    vector<vector<int>> matrix = {
        {1, -2, 3},
        {-4, 5, -6},
        {7, -8, 9}
    };

    Solution sol;
    long long result = sol.maxMatrixSum(matrix);

    // Output the result
    cout << "The maximum matrix sum is: " << result << endl;

    return 0;
}
