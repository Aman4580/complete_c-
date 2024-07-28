#include <bits/stdc++.h>
using namespace std;
int maxPower2(int n){
  int  temp ;
   while(n!=0){
   temp = n;
   n = ( n & n-1);
   }
   return temp;
}
int main() {
  cout<<maxPower2(100)<<endl;
    return 0;
}
