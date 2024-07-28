#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "387";
    int sum = 0;
    int ans = 0;
    int k = 1; 
    for (int i = s.size() - 1; i >= 0; i--) {
        int p = s[i] - '0';  
            ans = p*k;
            sum = sum + ans;
            k = k * 10;
    }
    cout << sum << " " << ans <<endl;
    return 0;
}
