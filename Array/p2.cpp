#include <iostream>
using namespace std;

int solve(int arr[], int n) {
    int mx = arr[n-1];
    int mx2 = 0;

    // Find the second maximum value
    for(int i =n-2; i>=0; i--){
        if(arr[i] < mx) {
            cout<<" max is this->"<< arr[i]<<" ";
            mx2 = arr[i];
            break;
        }
    }

    // Count occurrences of the second maximum value
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == mx2) {
            count++;
        }
    }

    return count;
}

int main() {
    int sortedArr[] = {1, 2, 2, 3, 3, 4};
    int n = 6;
    int ans = solve(sortedArr, n);
    cout << ans;
    return 0;
}
