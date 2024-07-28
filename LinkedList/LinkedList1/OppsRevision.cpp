#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int rn;
    float marks;
    Student(string s,int n,float m){
     name = s;
     rn = n;
     marks = m;
    }
};
int main(){
    Student st("Aman Verma",12,99.9);
    cout<<st.name<<" "<<st.rn<<" "<<st.marks<<endl;
    Student *ptr = &st;
    //(*ptr).name= "anshika";
    ptr->name =" saloni";
    cout<<st.name;
    return 0;
}