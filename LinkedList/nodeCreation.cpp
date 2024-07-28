#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
   Node(int val){
    this->val =val;
    this->next = NULL;
   }
};
// by using loop
// void display(Node* head){
//        Node *temp = head;
//        while(temp!=NULL){
//        cout<<temp->val<<" ";
//        temp = temp->next; 
//    }
// }
//by using recursion 
void display(Node* head){
    if(head!=NULL){
         cout<<head->val<<" ";
      display(head->next);
    }
}
int size(Node* head){
    if(head==NULL){
        return 0;
    }
    int count =0;
    Node* temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
int main() {
    // Node creation 
   Node * a = new Node(10);
   Node * b = new Node(20);
   Node * c = new Node(30);
   Node * d = new Node(40);
   Node * e = new Node(50);
   //linking node
   a->next = b;
   b->next  = c;
   c->next = d;
   d->next = e;
   //print data 
   display(a);
   cout<<endl;
   cout<<size(a);
    return 0;
}
