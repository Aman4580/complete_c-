#include <bits/stdc++.h>
using namespace std;
// very optimal approach 
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
      int k;
    cout << "Enter the size of the subarray: ";
    cin >> k;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
//calculate previous sum
    int presum = 0;
    for (int i = 0; i < k; i++) 
    {
       presum = presum + arr[i];
    }
     int i=1;
     int j=k;
     int maxidx =-1;
     int maxsum = 0;
     while(j<n){
        int currsum = presum + arr[j] - arr[i-1];
        if(currsum>maxsum){
            maxsum = currsum;
            maxidx = i;
        }
        presum = currsum;
        i++;
        j++;
     }
      
    cout<<"max sum is "<<maxsum << " and "<<"max index is "<< maxidx;
    return 0;
}
