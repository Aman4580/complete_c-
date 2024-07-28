#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number for find squart  "<<endl;
    cin>>n;
    int low =0; 
    int high = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(mid*mid == n){
            cout<<mid<<endl;
            break;
        }
        if(mid*mid>n){
            high=mid-1;
        }
        if(mid*mid<n){
            low=mid+1;
        }
    }
    return 0;
    }