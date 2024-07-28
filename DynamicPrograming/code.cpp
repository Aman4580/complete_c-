#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

// Function to calculate modular exponentiation (base^exp % mod)
int power(int base, int exp, int mod) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long result = 0;

        for (int i = 1; i <= n; ++i) {
            // If j > i, C(i, j) = i
            // Otherwise, C(i, j) = j
            int contribution = (i > 1) ? power(2, i - 1, MOD) : 1;
            result = (result + contribution) % MOD;
        }

        cout << result << endl;
    }

    return 0;
}
