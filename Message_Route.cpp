#include<bits/stdc++.h>
using namespace std;
const int N=1e7+2;
vector<int> adj[N];
int parent[N];
bool visited[N];
int dist[N];
void bfs(int s,int p=-1){
    queue<int> q;
    q.push(s);
    dist[s]=1;
    parent[s]=-1;
    visited[s]=true;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v:adj[u]){
            if(visited[v]) continue;
            parent[v]=u;
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
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    int curr=n;
    vector<int> v;
    while(curr!=-1){
        v.push_back(curr);
        curr=parent[curr];
    }
    reverse(v.begin(),v.end());
    cout<<dist[n]<<endl;
    for(int val:v){
        cout<<val<<" ";
    }
    return 0;
}