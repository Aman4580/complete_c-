#include<iostream>
using namespace std;
int climbstairs(int n) {
if(n==1) return 1;
if(n==2) return 2;
return (climbstairs(n-1)+climbstairs(n-2));
}
int main() {
   int a;
   cin>>a;
   cout<<climbstairs(a);
    return 0;
}
