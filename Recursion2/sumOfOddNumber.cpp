#include<iostream>
using namespace std;
int sum =0;
void oddsum(int a,int b){
    if(a>b){
        cout<<sum<<endl;
        return;
    }
    int num = a;
    if(num%2!=0){
     sum = sum+num;
    }
    oddsum(a+1,b);
}
int main(){
    int a,b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    oddsum(a,b);
    return 0;

}