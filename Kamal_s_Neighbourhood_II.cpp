#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
vector<int> adj[N];
bool visited[N];
int bfs(int s){
    queue<int> q;
    int cnt=0;
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v:adj[u]){
            if(visited[v]) continue;
            cnt++;
            q.push(v);
            visited[v]=true;
        }
    }
    return cnt;
}
int main()
{   
    int n,m; cin>>n>>m;
    while(m--){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        //adj[v].push_back(u);
    }
    int k; cin>>k;
    cout<<bfs(k)<<endl;
    
    return 0;
}