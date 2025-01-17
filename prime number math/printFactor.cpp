#include<bits/stdc++.h>
using namespace std;
void  printFactor(int n){
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0) cout <<i <<" ";
    }
    // for(int i=sqrt(n);i>=1;i--){
    //     if(n%i==0) cout <<n/i <<" ";
    // }
}
int main(){
    int n;
    cout<<"Enter the number to check prime "<<endl;
    cin>>n;
       printFactor(n);
    return 0;
}


#include <iostream>
using namespace std;

void primeFactors(int n) {
    // Print the number of 2's that divide n
    while (n % 2 == 0) {
        cout << 2 << " ";
        n /= 2;
    }

    // n must be odd at this point, so we can skip even numbers
    for (int i = 3; i * i <= n; i += 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2) {
        cout << n;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << "No prime factors for " << n << ".\n";
    } else {
        cout << "Prime factors of " << n << ": ";
        primeFactors(n);
        cout << endl;
    }

    return 0;
}
