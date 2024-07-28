#include<iostream>
using namespace std;
int  PowerOfTwo(int a){
    if(a==1) return true;
    if(a%2!=0) return false;
    return PowerOfTwo(a/2);
}
int main(){
    int a;
    cout<<"Enter number"<<endl;
    cin>>a;
  if(PowerOfTwo(a)){
    cout<<"Yes"<<endl;
  }
    else{
        cout<<"No"<<endl;
    }
    return 0;

}