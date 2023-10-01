#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
vector<int> adj[N];
bool visited[N];
int parent[N];
void bfs(int s){
    queue<int> q;
    q.push(s);
    visited[s]=true;
    parent[s]=-1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v:adj[u]){
            if(visited[v]) continue;
            q.push(v);
            visited[v]=true;
            parent[v]=u;
        }
    }
}
int main()
{   
    int n,m; cin>>n>>m;
    while(m--){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    vector<int> v;
    int d; cin>>d;
    int curr=d;
    while(curr!=-1){
        v.push_back(curr);
        curr=parent[curr];
    }
    reverse(v.begin(),v.end());
    for(int val:v){
        cout<<val<<" ";
    }
    return 0;
}