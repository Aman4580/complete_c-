#include<bits/stdc++.h>
using namespace std;

int solve(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    int a1 = solve(n-1);
    int a2 = solve(n-2);
    return a1*a1+a2*a2;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int ans = solve(n);
    cout << "The answer is: " << ans << endl;
    return 0;
}
