#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
bool visited[N];
vector<int> adj[N];
void dfs(int u){
    visited[u]=true;
    for(int v:adj[u]){
        if(visited[v]) continue;
        dfs(v);
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
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(visited[i]) continue;
        dfs(i);
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}