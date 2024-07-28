#include<bits/stdc++.h>
using namespace std;
void display(queue<int> q) {
    if (q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        queue<int> temp = q;
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }
}
void reverse(queue<int> &q){
 if (q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
          stack<int>st;
          while (!q.empty()) 
        {
            st.push(q.front());
            q.pop();
        }
       while(!st.empty()){
        q.push(st.top());
        st.pop();
       }
         
    }
}

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    reverse(q);
    display(q);

    return 0;

}   