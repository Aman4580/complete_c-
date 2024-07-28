//Sorting technique in which reletive order is not change
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
    if(vec[j]==0){
    swap(vec[j],vec[j+1]);
    }
    }
    }
    //data after sorting 
    for(int i=0;i<n;i++){
    cout<<vec[i]<<" ";
    }
    return 0;
}

// Output:-
// Reletive order is maintain
// Enter the size of vector 
// 9
// Enter the Data in the vector 
// 5 0 1 2 0 0 4 0 3
// 5 1 2 4 3 0 0 0 0 