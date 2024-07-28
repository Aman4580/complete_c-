#include <bits/stdc++.h>
using namespace std;

int main() {
   string str = "aaabbcddaabffg";
   stack<char>st;
   for(char x : str){
    if(st.empty()==1){
        st.push(x);
    }
    else if(st.top()==x){
        continue;
    }else{
        st.push(x);
    }
   }
   while(st.size()>0){
    cout<<st.top()<<" ";
    st.pop();
   }
    return 0;
}
