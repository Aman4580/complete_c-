#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of vector "<<endl;
    cin>>n;
    vector<int>vec(n);
    cout<<"Enter the Data in the vector "<<endl;
    for(int i=0;i<n;i++){
    cin>>vec[i];
    }
    //logic for Insertion sort
    int j,x;
    for(int i=1;i<n;i++){
    j=i-1;
    x=vec[i];
    while(j>-1&&vec[j]>x){
     vec[j+1]=vec[j];
     j--;
    }
    vec[j+1]=x;
    }

    //data after sorting 
    for(int i=0;i<n;i++){
    cout<<vec[i]<<" ";
    }
    return 0;
}