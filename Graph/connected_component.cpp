#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
int v;
void add_edge(int src,int dest,bool dir = true){
graph[src].push_back(dest);
if(dir){
    graph[dest].push_back(src);
}
}
void dfs(int node,set<int>&visited){
visited.insert(node);
for(auto neighbour: graph[node]){
    if(not visited.count(neighbour)){
        dfs(neighbour,visited);
    }
}
}
int connected_component(){
    int cnt =0;
    set<int>visited;
for(int i=0;i<v;i++){
    if(visited.count(i)==0){
        cnt++;
        dfs(i,visited);
    }
}
return cnt;
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
    int ans = connected_component();
    cout<<"No of connected componet is "<<ans;
    return 0;
}