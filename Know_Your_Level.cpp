#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
vector<int> adj[N];
bool visiteed[N];
int level[N];
vector<int> v1;
int l;
void bfs(int s){
    queue<int> q;
    q.push(s);
    level[s]=0;
    visiteed[s]=true;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        if(level[u]==l) v1.push_back(u);
        for(int v:adj[u]){
            if(visiteed[v]) continue;
            q.push(v);
            level[v]=level[u]+1;
            visiteed[v]=true;
        }
    }
}
int main()
{   
    int n,m; cin>>n>>m;
    while(m--){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(v);
    }
    cin>>l;
    bfs(0);
    sort(v1.begin(),v1.end());
    if(v1.size()==0){
        cout<<-1<<endl;
    }
    else{
        for(int val:v1){
            cout<<val<<" ";
        }
    }
    return 0;
}