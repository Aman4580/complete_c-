#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        if(k%2!=0){
            cout<<x<<" "<<y;
            k--;
        }
        cout<<endl;
        for(int i=1;i<k/2+1;i++){
            cout<<x-i<<" "<<y-i<<endl;
            cout<<x+i<<" "<<y+i<<endl;
        }
    }
}