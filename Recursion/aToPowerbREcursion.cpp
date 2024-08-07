#include<bits/stdc++.h>
using namespace std;
int power(int x,int y){
    if(y==0) return 1;
      return x*power(x,y-1);
}
int main(){
    int a;
    cout<<"Enter the value of a :";
    cin>>a;
    int b;
    cout<<"Enter the value of b :";
    cin>>b;
    cout<<power(a,b)<<endl;
    return 0;
}