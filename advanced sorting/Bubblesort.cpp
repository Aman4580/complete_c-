#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool flag=true;
    cout<<"Enter the size of vector "<<endl;
    cin>>n;
    vector<int>vec(n);
    cout<<"Enter the Data in the vector "<<endl;
    for(int i=0;i<n;i++){
    cin>>vec[i];
    }
    //logic for bubble sort
    for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
    if(vec[j]>vec[j+1]){
    swap(vec[j],vec[j+1]);
    flag=false;
    }
    }
    if(flag==true){
    break;
    }
    }

    //data after sorting 
    for(int i=0;i<n;i++){
    cout<<vec[i]<<" ";
    }
    return 0;
}