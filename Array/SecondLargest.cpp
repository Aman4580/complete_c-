#include <iostream>

int findSecondMaxUsingBinarySearch(int arr[], int left, int right) {
    if (right - left < 1) {
        std::cout << "Array should have at least two distinct elements" << std::endl;
        return -1;  // Indicating an error
    }

    // The maximum element is at the end
    int max = arr[right];

    // Initialize the binary search boundaries
    int low = left;
    int high = right - 1;  // Exclude the maximum element

    int secondMax = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] < max) {
            // The element at mid is a candidate for second maximum
            secondMax = arr[mid];
            // Search in the right half
            low = mid + 1;
        } else {
            // Search in the left half
            high = mid - 1;
        }
    }

    if (secondMax == -1) {
        std::cout << "No second maximum found (all elements might be the same)" << std::endl;
    }

    return secondMax;
}

int main() {
    int sortedArr[] = {1, 3, 5, 7, 9};
    int n = sizeof(sortedArr) / sizeof(sortedArr[0]);
    int secondMax = findSecondMaxUsingBinarySearch(sortedArr, 0, n - 1);

    if (secondMax != -1) {
        std::cout << "The second maximum element is: " << secondMax << std::endl;
    }

    return 0;
}
