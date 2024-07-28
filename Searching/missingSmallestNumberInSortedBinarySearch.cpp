#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of vector "<<endl;
    cin>>n;
    vector<int>vec(n);
    cout<<"Enter the Data in the vector "<<endl;
    for(int i=0;i<n;i++)
    {
    cin>>vec[i];
    }
    int ans=-1;
    int mid;
    int low=0;
    int high=n-1;
    while(low<=high){
        mid= low + (high-low)/2;
        if(vec[mid]==mid){
           low=mid+1;
        }
         else{
            ans=mid;
            high=mid-1;
         }
    }
   cout<<ans<<endl;
    return 0;
    }