#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {-78, -4, -50, -3, -29, -6};
    int n = 6;
    int maxsum = INT_MIN;
    int maxidx = -1;
    for (int k = 1; k <= n; k++) { 
        int presum = 0;
        for (int i = 0; i < k; i++) {
            presum = presum + arr[i];
        }
        if (presum > maxsum) {
            maxsum = presum;
            maxidx = 0;
        }
        int i = k;
        int j = 0;
        while (i < n) {
            presum = presum - arr[j] + arr[i];
            if (presum > maxsum) {
                maxsum = presum;
                maxidx = j + 1;
            }
            i++;
            j++;
        }
    }
    cout << "Max sum is " << maxsum << " and max index is " << maxidx << endl;
    return 0;
}
