#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n,value;
    // cout<<"Enter the size of vector ";
    // cin>>n;
    // vector<int>v;
    // map<int,int>mp;
    // cout<<"Enter the element in vector";
    // for(int i=0;i<n;i++){
    //      cin >>value;
    //       v.push_back(value);
    // }
    // for(int i=0;i<n;i++){
    //     cout<<v[i];
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //    mp[v[i]]++;
    // }
    //  map<int,int>::iterator it;
    //  int max=0,element;
    //  for( it=mp.begin(); it!=mp.end(); it++){
    //     if(it->second>max){
    //         max = it->second;
    //         element = it->first;
    //     }
    //   }
    //   cout <<max<<endl;
    //   cout <<element<<endl;
    //   return 0;
    int n;
    cout<<"enter n";
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=0;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout<<a[i][j];
        }
    }

}