#include<bits/stdc++.h>
using namespace std;
void print(string str,int n){
if(str.length()==n){
    cout<<str<<endl;;
    return ;
}
print(str+'0',n);

if(str == "" || str[str.length()-1]=='0'){
  print(str+'1',n);
}
}
int main(){
    int n=3;
    string str = "";
    print(str,n);
    return 0;
}