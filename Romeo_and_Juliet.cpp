#include<bits/stdc++.h>
using namespace std;
const int N=1e3+2;
bool visited[N];
int level[N];
vector<int> adj[N];
void bfs(int s){
    queue<int> q;
    level[s]=0;
    visited[s]=true;
    q.push(s);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v:adj[u]){
            if(visited[v]){
                continue;
            }
            visited[v]=true;
            q.push(v);
            level[v]=level[u]+1;
        }
    }
}
int main()
{   
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int x,y,k;
    cin>>x>>y>>k;
    bfs(x);
    if(level[y]==0) cout<<"NO"<<endl;
    else{
        if(k*2 >= level[y]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}