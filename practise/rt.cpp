#include<bits/stdc++.h>
using namespace std;
// int inc(int a,int &b){
//     a +=10;
//     b +=10;
//     a -=99;
//     return a;
// }
// int main(){
// int a = 10;
// int b = 20;
// int ans = inc(a,b);
// cout<<ans<<endl;
// cout<<a;
// return 0;
// }
void f(int *p,int *q){
    p =q;
    *p = 2;
}

int i=0,j=1;
int main(){
f(&i,&j);
cout<<i<<"  "<<j<<endl;
return 0;    
}