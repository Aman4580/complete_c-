#include <iostream>
#include <vector>

using namespace std;

void printSubarraysWithSumLessThanOrEqualToK(const vector<int>& arr, int k) {
    int n = arr.size();

    for (int start = 0; start < n; ++start) {
        int currentSum = 0;
        for (int end = start; end < n; ++end) {
            currentSum += arr[end];
            if (currentSum <= k) {
                cout << "Subarray from index " << start << " to " << end << ": ";
                for (int i = start; i <= end; ++i) {
                    cout << arr[i] << " ";
                }
                cout << "(Sum = " << currentSum << ")\n";
            }
        }
    }
}
int main() {
    vector<int> arr = {2, 3, 1, 4, 5};
    int k = 6;

    printSubarraysWithSumLessThanOrEqualToK(arr, k);

    return 0;
}
