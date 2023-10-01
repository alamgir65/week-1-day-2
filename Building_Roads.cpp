#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
vector<int> adj[N];
bool visited[N];
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
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> v;
    for(int i=1;i<=n;i++){
        if(visited[i]) continue;
        dfs(i);
        v.push_back(i);
    }
    cout<<v.size()-1<<endl;
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]<<" "<<v[i+1]<<endl;
    }
    return 0;
}