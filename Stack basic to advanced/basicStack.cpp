#include<bits/stdc++.h>
using namespace std;

void print(stack<int>st){
if(st.empty()){
    return;
}
    int x = st.top();
     st.pop();
     cout<<x<<" ";
     print(st);
}

int main(){
    stack<int>st;
    stack<int>st2;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.top()<<endl;
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st2.push(st.top());
    //     st.pop();
    // }
    // cout<<endl;
    // while(!st2.empty()){
    //     cout<<st2.top()<<" ";
    //     st2.pop();
    // }
    print(st);
    return 0;
}