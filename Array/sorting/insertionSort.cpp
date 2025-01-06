#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int>& res) {
    int n = res.size();
    for (int i = 1; i < n; i++) {
        int key = res[i]; // Store the current element to be inserted
        int j = i - 1;

        // Move elements of res[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && res[j] > key) {
            res[j + 1] = res[j];
            j = j - 1;
        }
        res[j + 1] = key; // Insert the key at the correct position
    }
}

int main() {
    vector<int> res = {7, 1, 6, 2, 9, 5};
    insertion_sort(res);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}
