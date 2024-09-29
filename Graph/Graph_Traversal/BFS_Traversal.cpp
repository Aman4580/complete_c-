#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
int v;// no of vertices
set<int>visited;

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
void bfs(int src,vector<int>&dis){
    queue<int>q;
    visited.clear();
    dis.resize(v,INT_MAX);
    visited.insert(src);
    dis[src]=0;
    q.push(src);
    while(!q.empty()){
        int curr = q.front();
        cout<<curr<<" ";
        q.pop();
        for(auto neighbour : graph[curr]){
        if(not visited.count(neighbour)){
            q.push(neighbour);
            visited.insert(neighbour);
            dis[neighbour] = dis[curr] +1;
        }
        }
    }
    cout<<endl;
}

int main () {
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    visited.clear();
    while(e--){
     int src,dest;
     cin>>src>>dest;
     add_edge(src,dest);//undirected 
    }
    display();
    int source;
    cout<<"Enter sourse "<<endl;
    cin>>source;
    vector<int>distance;
    bfs(source,distance);
    for(int i=0;i<distance.size();i++){
        cout<<distance[i]<<" ";
    }
    return 0;
}