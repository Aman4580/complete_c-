#include<bits/stdc++.h>
using namespace std;

int solve(int n) {
    if(n == 0) return 1;
    if(n == 1) return 1;

    int ans = ((solve(n-1)*solve(n-1))+(solve(n-2)+solve(n-2)));
    return ans%47;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int ans = solve(n);
    cout << "The answer is: " << ans << endl;
    return 0;
}
