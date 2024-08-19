#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

class Solution {
public:
    int solve(int n) {
        if (n == 0) return 0;
        if (n < 0) return INT_MAX;

        int ans = INT_MAX;
        for (int i = 1; i * i <= n; i++) {
            int result = solve(n - i * i);
            if (result != INT_MAX) {
                ans = min(ans, result + 1);
            }
        }
        return ans;
    }

    int numSquares(int n) {
        return solve(n);
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int result = sol.numSquares(n);
    if (result != INT_MAX) {
        cout << "The minimum number of perfect squares that sum to " << n << " is: " << result << endl;
    } else {
        cout << "It's not possible to sum to " << n << " using perfect squares." << endl;
    }

    return 0;
}
