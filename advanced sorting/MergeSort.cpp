#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int l,int mid,int h){
    int n1 = mid-l+1;
    int n2 = h-mid;
    vector<int> leftArr(n1), rightArr(n2);
    for (int i = 0; i < n1; ++i)
        leftArr[i] = arr[l + i];
    for (int j = 0; j < n2; ++j)
        rightArr[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            ++i;
        } else {
            arr[k] = rightArr[j];
            ++j;
        }
        ++k;
    }
    while (i < n1) {
        arr[k] = leftArr[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        ++j;
        ++k;
    }
}
void merge_sort(vector<int>&vec,int l, int h){
    if(l>h) return;
    
    if(l<h){


        int mid=(l+h)/2;
        merge_sort(vec,l,mid);
        merge_sort(vec,mid+1,h);
        merge(vec,l,mid,h);
    }
}
int main(){
    int n;
    cout<<"Enter the size of vector "<<endl;
    cin>>n;
    vector<int>vec(n);
    cout<<"Enter the Data in the vector "<<endl;
    for(int i=0;i<n;i++){
    cin>>vec[i];
    }
    merge_sort(vec,0,n-1);
    for(int i=0;i<n;i++){
    cout<<vec[i]<<" ";
    }
    return 0;
}