#include<bits/stdc++.h>
using namespace std;
void removeA(string s,string b,int i){
    if(s.size()==i){
        cout<<b<<endl;
        return;
    }
if(s[i]!='a')
b+=s[i];
return removeA(s,b,i+1);
}
int main(){
 string s= "godaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
 removeA(s,"",0);
}