#include<bits/stdc++.h>
using namespace std;
int maze(int sr,int sc,int er,int ec){
if(sr>er ||sc>ec) return 0;
if(sr==er &&sc==ec) return 1;
int rw = maze(sr,sc+1,er,ec);
int dw = maze(sr+1,sc,er,ec);
int total = rw+dw;
return total;
   
}
void path(int sr,int sc,int er,int ec,string s){
if(sr>er ||sc>ec) return;
if(sr==er &&sc==ec) {
    cout<<s<<endl;
    return;
}
path(sr,sc+1,er,ec,s+"R");
path(sr+1,sc,er,ec,s+"D");
}

int main(){
    int m,n;
    cout<<"Enter the number of row in matrix"<<endl;
    cin>>m;
    cout<<"Enter the number of colomn in matrix"<<endl;
    cin>>n;
    cout<<maze(0,0,m,n)<<endl;
    path(0,0,m,n,"");
    return 0;
}