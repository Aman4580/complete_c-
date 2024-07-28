#include<bits/stdc++.h>
using namespace std;
int main(){
   unordered_set<int>st;
    st.insert(12);
    st.insert(13);
    st.insert(14);
    st.insert(15);
    st.insert(16);
    st.erase(2);   // deleate particular value
    for(int i : st){
        cout<<i<<endl;
    }
// search particular value in Hassets
int target = 86;
// if we write == them target not present
// if write != them target is present
// st.find work to work 1) it serches the element if not fount them return last element (say) 
if(st.find(target)!=st.end()){
cout<<"element is exixt"<<endl;
}else{
  cout<<"element is not exixt"<<endl;  
}
    return 0;
}