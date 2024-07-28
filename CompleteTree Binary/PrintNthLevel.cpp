#include<bits/stdc++.h>
using namespace std;
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
void display(Node*head,int curr,int leve){ 
    if(head==NULL) return;
    if(curr==leve){
    cout<<head->val<<" ";
    }
    display(head->left,curr+1,leve);
    display(head->right,curr+1,leve);
}

int main(){
// Node* a = new Node(1);//rott node
// Node* b= new Node(2);
// Node* c= new Node(3);
// Node* d= new Node(4);
// Node* e= new Node(5);
// Node* f= new Node(6);
// Node* g= new Node(7);
// a->left=b;
// a->right=c;
// b->left=d;
// b->right=e;
// c->left=f;
// c->right=g;
// int lev;
// cout<<"Enter the level to print data : "<<endl;
// cin>>lev;
// display(a,1,lev);
// char ch =  1 +'a';
char a,b,c,d;
// cout<<"the value is this : "<< ch <<" ";
if((a+b)>(c+d)){
    cout<<"yes"<<" ";
}else{
     cout<<"No"<<" ";
}
    return 0;
}