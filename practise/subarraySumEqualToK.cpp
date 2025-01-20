#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void findSubarraysWithSumK(const vector<int>& arr, int k) {
    unordered_map<int, vector<int>> prefixSumMap;
    int currentSum = 0;

    // Initialize map with a dummy prefix sum to handle subarrays starting at index 0
    prefixSumMap[0].push_back(-1);

    for (int i = 0; i < arr.size(); ++i) {
        currentSum += arr[i];

        // Check if there are any subarrays that sum to k
        if (prefixSumMap.find(currentSum - k) != prefixSumMap.end()) {
            for (int startIndex : prefixSumMap[currentSum - k]) {
                // Print the subarray values
                cout << "Subarray from index " << startIndex + 1 << " to " << i << ": ";
                for (int j = startIndex + 1; j <= i; ++j) {
                    cout << arr[j] << " ";
                }
                cout << "has sum " << k << endl;
            }
        }

        // Store the current prefix sum and its index
        prefixSumMap[currentSum].push_back(i);
    }

    // Check if no subarray was found
    if (prefixSumMap.find(k) == prefixSumMap.end()) {
        cout << "No subarray with sum " << k << " found." << endl;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, -3, 4, -2, 2};
    int k = 5;

    findSubarraysWithSumK(arr, k);

    return 0;
}
