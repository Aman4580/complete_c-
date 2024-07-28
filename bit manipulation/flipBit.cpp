#include <bits/stdc++.h>
using namespace std;
int maxPower2(int n){
    int temp =n;
    while(n>0){
    n = n & n-1;
    }
  return temp;
}
int main() {
    int n;
    cout<<"enter the number for flip"<<endl;
    cin>>n;
  int mask = maxPower2(n);
  int mask2 = mask*2-1;
  cout<<(n ^ mask2)<<endl;
    return 0;
}
