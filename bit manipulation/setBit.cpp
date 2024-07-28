#include <bits/stdc++.h>
using namespace std;
int set_bit(int n){
    return __builtin_popcount(n);
}
int main() {
  cout<<set_bit(13)<<endl;
    return 0;
}
