#include<bits/stdc++.h>
using namespace std;
void zigzag(int n){
    if(n==0) return;
  cout<<n;
  zigzag(n-1);
  cout<<n;
  zigzag(n-1);
  cout<<n;

}


int main(){
    int n;
    cout<<"Enter the number"<<endl;
      cin>>n;
    zigzag(n);
    return 0;
}