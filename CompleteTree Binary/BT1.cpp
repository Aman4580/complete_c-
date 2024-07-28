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
void display(Node*head){ // yahi DFS hai
    if(head==NULL) return;
    display(head->left);
    display(head->right);
    cout<<head->val<<" ";
}
int sumOfAllNode(Node* head){
    int x,y;
    if(head!=NULL){
        x = sumOfAllNode(head->left);
        y = sumOfAllNode(head->right);
        return x+y+head->val;
    }
}
int sizeOfTree(Node *head){
if(head==NULL){
    return 0;
} 
int lefttree = sizeOfTree(head->left);
int righttree = sizeOfTree(head->right);
return lefttree+righttree+1;
}
int mxx(Node *head){
    if(head==NULL) return INT_MIN;
    mx = max(head->val,mx);
    mxx(head->left);
    mxx(head->right);
    return mx;
}  
int level(Node *head){
if(head==NULL) return 0;
return 1+max(level(head->left),level(head->right));
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
display(a);
cout<<endl;
cout<<sumOfAllNode(a)<<endl;
cout<<sizeOfTree(a)<<endl;
cout<<mxx(a)<<endl;
cout<<level(a)-1<<endl;
    return 0;
}