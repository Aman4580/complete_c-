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
    //logic for bubble sort
    int i,j,k;
    for(int i=0;i<n-1;i++){
    for(int j=k=i;j<n;j++){
    if(vec[j]<vec[k]){
   k=j;
    }
    }
     swap(vec[i],vec[k]);
    }
    //data after sorting 
    for(int i=0;i<n;i++){
    cout<<vec[i]<<" ";
    }
    return 0;
}