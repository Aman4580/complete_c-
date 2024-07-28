#include<bits/stdc++.h>
using namespace std;
int mx =0;
class Node{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val=val;
        this->left= NULL;
        this->right=NULL;
    }
};
void BFSQUEUE(Node* head){// left to right
if(head==NULL){
    return;
}
stack<Node*>q;
q.push(head);
while(q.size()>0){
    Node *temp = q.top();s
    q.pop();
    cout<<temp->val<<" ";
    if(temp->left!=NULL) q.push(temp->left);
    if(temp->right!=NULL) q.push(temp->right);
}
}
int main(){
Node* a = new Node(1);//rott node
Node* b= new Node(2);
Node* c= new Node(3);
Node* d= new Node(4);
Node* e= new Node(5);
Node* f= new Node(6);
Node* g= new Node(7);
a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;
BFSQUEUE(a);
    return 0;
}