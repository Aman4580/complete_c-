#include <iostream>
#include <vector>
using namespace std;

// Function to perform binary search on a sorted matrix
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();    // Number of rows in the matrix
    int cols = matrix[0].size(); // Number of columns in the matrix

    int left = 0, right = rows * cols - 1; // Treat the matrix as a 1D array

    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the middle index
        int midValue = matrix[mid / cols][mid % cols]; // Convert 1D index to 2D indices

        if (midValue == target) {
            return true; // Target found
        } else if (midValue < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return false; // Target not found
}

int main() {
    // Example input: 2D sorted matrix
    vector<vector<int>> matrix = {
        {1, 3, 5},
        {7, 9, 11},
        {13, 15, 17}
    };
    int target = 9; // Element to search for

    // Perform binary search
    if (searchMatrix(matrix, target)) {
        cout << "Element " << target << " found in the matrix." << endl;
    } else {
        cout << "Element " << target << " not found in the matrix." << endl;
    }

    return 0;
}
