#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
int v;// no of vertices
void add_edge(int src,int dest,bool dir = true){
graph[src].push_back(dest);
if(dir){
    graph[dest].push_back(src);
}
}
void display(){
    for(int i=0;i<v;i++){
        cout<<i<<"->";
        for(auto it : graph[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
int main () {
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--){
     int src,dest;
     cin>>src>>dest;
     add_edge(src,dest);
    }
    display();
    return 0;
}