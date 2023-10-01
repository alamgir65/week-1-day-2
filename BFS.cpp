#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
vector<int> adj[N];
bool visited[N];
int dist[N];
void bfs(int s){
    queue<int> q;
    visited[s]=true;
    dist[s]=0;
    q.push(s);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int v:adj[u]){
            if(visited[v]) continue;
            visited[v]=true;
            dist[v]=dist[u]+1;
            q.push(v);
        }
    }
}
int main()
{   
    int n,m;
    cin>>n>>m;
    while(m--){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    return 0;
}