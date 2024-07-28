#include <bits/stdc++.h>
using namespace std;
int xorOftwoNumber(int a,int b){
    return a^b;
}
int set_bit(int n){
    return __builtin_popcount(n);
}
int main() {
    int a=23;
    int b=32;
    int n = xorOftwoNumber(a,b);
  cout<<set_bit(n)<<endl;
    return 0;
}
