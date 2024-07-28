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
    int target;
    cout<<"enter the target for first occurence"<<endl;
    cin>>target;
    int mid;
    int low=0;
    int high=n-1;
    bool flag=0;
    while(low<=high){
        mid= low + (high-low)/2;
        if(vec[mid]==target){
            if(vec[mid-1]!=target){
            flag=1;
            cout<<"occurence position is"<< mid <<" "<<endl;
            break;
            }
            else{
                high=mid-1;
            }
        }
        if(vec[mid]<target){
        low=mid+1;
        }
        if(vec[mid]>target){
            high= mid-1;
        }
    }
              if(flag==0){
          cout<<-1<<endl;
    }

    return 0;
    }