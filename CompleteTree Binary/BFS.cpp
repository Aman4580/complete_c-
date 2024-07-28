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
void BFS(Node*head,int curr,int target){ // yahi DFS hai // left to right
    if(head==NULL) return;
    if(curr==target){
    cout<<head->val<<" ";
    return;
    }
    BFS(head->left,curr+1,target);
    BFS(head->right,curr+1,target);
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
int lev = level(a);
for(int i=0;i<lev;i++){
   BFS(a,0,i);
  cout<<endl;
}
    return 0;
}