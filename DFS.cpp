#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
bool visited[N];
int depth[N];
int height[N];
vector<int> adj[N];
void dfs(int u){
    visited[u]=true;
    cout<<u<<" ";
    for(int v:adj[u]){
        if(visited[v]) continue;
        depth[v]=depth[u]+1;
        dfs(v);
        if(height[v]+1 > height[u]){
            height[u]=height[v]+1;
        }
    }
}
int main()
{   
    int n,m; cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    return 0;
}