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
       for(int i=0;i<n;i++){
    cout<<vec[i]<<" ";
    }
    int l=0;
vector<int>v;
    for(int i=0;i<n;i++){
  v.push_back(vec[i]);
    }
    sort(v.begin(),v.end());
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
               if(v[i]==vec[j]){
                vec[j]=l++;
               }
        }
      }

 cout<<endl;
    for(int i=0;i<n;i++){
    cout<<vec[i]<<" ";
    }
    return 0;
}