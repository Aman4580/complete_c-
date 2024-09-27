#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
set<int>visited;
vector<vector<int>>result;
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
void dfs(int curr,int end,vector<int>&path){
if(curr==end){
    path.push_back(curr);
    result.push_back(path);
    path.pop_back();
    return;
}
visited.insert(curr);
path.push_back(curr);
for(auto neighbour : graph[curr]){
    if(not visited.count(neighbour)){
         dfs(neighbour,end,path);
    }
}
path.pop_back();
visited.erase(curr);
return;
}
void allPathExist(int src,int end,vector<int>&vec){
    dfs(src,end,vec);
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
    cout<<endl<<" Any path exist";
    int u,v;
    cin>>u>>v;
    // bool res = pathExist(u,v);
    // cout<<res<<endl;
    //     cout<<endl<<" Any path exist";
    
    vector<int>temp;
    allPathExist(u,v,temp);
    for(auto it : result){
        for(auto ele: it){
            cout<<ele<<" ";
        }
        
        cout<<endl;
    }
    return 0;
}