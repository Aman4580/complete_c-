#include<bits/stdc++.h>
using namespace std;
vector<list<pair<int,int>>>graph;
int v;// no of vertices
void add_edge(int src,int dest,bool dir,int wt){
graph[src].push_back({dest,wt});
if(dir){ 
    graph[dest].push_back({src,wt});
}
}
void display(){
    for(int i=0;i<v;i++){
        cout<<i<<"->";
        for(auto it : graph[i]){
            cout<<"("<<it.first<<" "<<it.second<<")"<<",";
        }
        cout<<endl;
    }
}
int main () {
    cin>>v;
    graph.resize(v,list<pair<int,int>>());
    int e;
    cin>>e;
    while(e--){
     int src,dest,wt;
     cin>>src>>dest>>wt;
     add_edge(src,dest,true,wt);//undirected 
    // add_edge(src,dest,false);// directed graph
    }
    display();
    return 0;
}