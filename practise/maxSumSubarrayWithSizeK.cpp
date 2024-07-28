#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int maxsum=0;
    int sum =0;
      int k;
    cout << "Enter the size of the subarray: ";
    cin >> k;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print all subarrays
    for (int i = 0; i <n-k; i++) {
        for (int j = i; j < k+i; j++) {
         sum = sum + arr[j];
        }  
         maxsum = max(maxsum,sum);
         sum=0;
    }
    cout<<"max sum is ";
  cout<<maxsum<<endl;
    return 0;
}
