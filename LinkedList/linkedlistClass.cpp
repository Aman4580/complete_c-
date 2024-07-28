#include <bits/stdc++.h>
using namespace std;

class Node { // user define datatype 
public:
    int val;
    Node* next;

    Node(int val){
    this->val =val;
    this->next = NULL;
   }
};
//user define datastructure 
class LinkedList{
public:
    Node *head;
    Node * tail;
    int  size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val){
    Node *temp = new Node(val);
    if(size == 0){
        head = tail = temp;
    }else{
    tail->next = temp;
    tail  = temp;
    }
    size++;
}
 void display(){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
 }
 void insertAtBegining(int val){
    Node * temp = new Node(val);
    if(size==0){
        head=tail=temp;
    }else{
        temp->next = head;
        head = temp;
    }
    size++;
 }
 void insertAtPosition(int po , int val){
    Node * temp = new Node(val);
    int i=0;
    if(po==0){
        insertAtBegining(val);
        return;
    }
    else if(po==size){
        insertAtEnd(val);
        return;
    }
    else{
    Node * temp1= head;
    while(i<po){
        temp1 = temp1->next;
        i++;
    }
    temp->next = temp1->next;
    temp1->next = temp;
    }
    size++;
 }
 void deletAtBegining(){
    if(size==0){
        cout<<"list is empty"<<endl;
        return ;
    }
    else if(size==1){
        head = tail = NULL;
        return;
    }else{
        head = head->next;
    }
    size--;
 }
 void deletAtend(){
     if(size==0){
        cout<<"list is empty"<<endl;
    }
        Node * temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next =NULL;
        tail = temp;
        size--;
 }


void deletAtPosition(int po) {
    if (size == 0) {
        cout << "list is empty" << endl;
        return ;
    }
    if (po < 0 || po > size) {
        cout << "Invalid position" << endl;
        return ;
    }
    if (po == 0) {
       deletAtBegining();
       return;
    }
    if (po == size) {
        deletAtend();
        return; 
    }
    Node *temp1 = head;
    // int i=1;
    // while(i<po-1){
    //    temp1 = temp1->next;
    //    i++;
    // }
    // temp1->next = temp1->next->next;
    //size--;
}


};
int main(){
    LinkedList ll;
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.insertAtEnd(50);
    ll.insertAtBegining(20);
    ll.insertAtBegining(10);
    ll.insertAtBegining(100);
    ll.insertAtPosition(0,166);
     ll.display();
    cout<<endl;
    cout<<ll.size<<endl;
    ll.deletAtPosition(7);
    ll.display();
    cout<<endl;
    return 0;
}