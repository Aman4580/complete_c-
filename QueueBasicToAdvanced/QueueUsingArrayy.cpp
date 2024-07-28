#include <bits/stdc++.h>
using namespace std;

int Queue[100], n = 100, front = - 1, rear = - 1;


void Insert(){
    int val ;
    if(rear == n-1){
        cout<<"Queue is over flow"<<endl;
    }else{
    if(front==-1){
        front = 0;
    }
        cout<<"Enter value for insert "<<endl;
    cin>>val;
    rear= rear +1;
    Queue[rear] = val;}
}

void Display(){
    if(front==-1 || front == -1) 
    cout<<"Queue is empty"<<endl;
    else{
        for(int i = front;i<=rear;i++){
            cout<<Queue[i]<<" ";
        }
        cout<<endl;
    }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from Queue is : "<< Queue[front] <<endl;
      front++;;
   }
}

int main() {
   int ch;
   while(1){
    cout<<"1) Insert element to Queue"<<endl;
   cout<<"2) Delete element from Queue"<<endl;
   cout<<"3) Display all the elements of Queue"<<endl;
   cout<<"4) Exit"<<endl;
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         exit(0);
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   }
   return 0;
}