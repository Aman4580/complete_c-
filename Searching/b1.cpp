#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool flag=true;
    cout<<"Enter the size of vector "<<endl;
    cin>>n;
    vector<int>vec(n);
    cout<<"Enter the Data in the vector "<<endl;
    for(int i=0;i<n;i++)
    {
    cin>>vec[i];
    }
    int target;
    cout<<"enter the target"<<endl;
    cin>>target;
    int mid;
    int low=0;
    int high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(vec[mid]==target){
            cout<<"Target present at "<<mid+1 <<"position"<<endl;
            break;
        }
        if(vec[mid]<target){
        low=mid+1;
        
        }
        if(vec[mid]>target){
            high= mid-1;
        }
    }

    return 0;
    }