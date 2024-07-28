#include<bits/stdc++.h>
using namespace std;
class Node{ 
public:
int val;
Node *next;
Node(int val){
    this->val = val;
    this->next = NULL;
}
};
class Stack{
public:
    Node *head;
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }
    void push(int val){
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
         size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return;
        }
        head = head->next;
        size--;
    }
    void top(){
            if(head==NULL){
            cout<<"Stack is top element is not found"<<endl;
            return;
    }
    cout<<head->val<<endl;
    }
    void printOrder(Node* remp){
      if(remp==NULL) return;
      int x = remp->val;
      printOrder(remp->next);
      cout<<x<<" ";
    }
    void display(){
        Node* temp1 = head;
        printOrder(temp1);
    }
};
int main(){
Stack st;
st.push(10);
st.push(20);
st.push(30);
st.display();
cout<<endl;
st.pop();
cout<<endl;
st.display();
cout<<endl;
cout<<st.size<<endl; 
cout<<endl;
st.top();
cout<<endl;
return 0;
}