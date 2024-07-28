#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};
class Queue {
public:
    Node* front;
    Node* rear;

    Queue() {
        front = rear = NULL;
    }
    void Insert() {
        int value;
        cout << "Enter the value for insert: ";
        cin >> value;
        Node* temp = new Node(value);

        if (rear == NULL) {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    void display(){
        if(rear==NULL){
            cout<<"list is empty"<<endl;
        }else{
            Node *temp = front;
            while(temp!=NULL){
                cout<<temp->val<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
    }
   void deleate() {
    if (front == nullptr) {
        cout << "Nothing to delete" << endl;
    } else {
        Node* temp = front;
        front = front->next;
        delete temp;
        if (front == nullptr) {
            rear = nullptr;
        }
    }
}

};

int main() {
    Queue q;
    q.Insert();
    q.Insert();
    q.Insert();
    q.Insert();
    q.display();
    q.deleate();
    q.display();
    return 0;
}
