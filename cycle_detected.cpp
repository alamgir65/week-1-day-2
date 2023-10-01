#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
vector<int> adj[N];
bool visited[N];
bool dfs(int u,int p=-1){
    bool isCycle=false;
    visited[u]=true;
    for(int v:adj[u]){
        if(v==p) continue;
        if(visited[v]) return true;
        isCycle = isCycle|dfs(v,u);
    }
    return isCycle;
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
    bool isCycle=false;
    for(int i=1;i<=n;i++){
        if(visited[i]) continue;
        isCycle |= dfs(i);
    }
    if(isCycle){
        cout<<"Cycle Detected"<<endl;
    }
    else{
        cout<<"NO Cycle"<<endl;
    }
    return 0;
}