#include <vector>
#include <algorithm>

using namespace std;

int solve(vector<int>& slices, int s, int e, int n) {
    if (n == 0 || s > e) {
        return 0;
    }
    int include = slices[s] + solve(slices, s + 2, e, n - 1);
    int exclude = 0 + solve(slices, s + 1, e, n);
    return max(include, exclude);
}

int maxSizeSlices(vector<int>& slices) {
    int k = slices.size();
    int opt1 = solve(slices, 0, k - 2, k / 3);
    int opt2 = solve(slices, 1, k - 1, k / 3);
    return max(opt1, opt2);
}



int main() {
    vector<int> slices = {1, 2, 3, 4, 5, 6}; 
    int result = maxSizeSlices(slices);
    return 0;
}
