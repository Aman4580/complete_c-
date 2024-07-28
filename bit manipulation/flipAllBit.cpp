#include <bits/stdc++.h>
using namespace std;
int maxPower2(int n){
    int temp =n;
  n = n | n>>1;
  n = n | n>>2;
  n = n | n>>4;
  n = n | n>>8;
  n = n | n>>16;
  return n ^temp;
}
int main() {
  cout<<maxPower2(16)<<endl;
    return 0;
}
