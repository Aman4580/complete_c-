#include <bits/stdc++.h>
using namespace std;
int set_bit(int n){
   int count =0;
   while(n>0){
    count++;
    n = (n & n-1);
   }
   return count;
}
int main() {
  cout<<set_bit(32)<<endl;
    return 0;
}
