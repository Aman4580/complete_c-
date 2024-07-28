#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number for binary "<<endl;
    cin>>n;
    string s = "";
   while(n!=0){
    int bit = n%2;
    s+=to_string(bit);
    n=n/2;
   }
   reverse(s.begin(),s.end());
    cout<<s<<endl;

}