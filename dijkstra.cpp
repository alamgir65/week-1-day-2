#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
const int N=1e5+2;
const int INF=1e9+7;
vector<pii> adj[N];
int dist[N];
bool visited[N];
void dijkstra(int s){
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    dist[s]=0;
    pq.push({dist[s],s});
    while(!pq.empty()){
        pii p=pq.top();
        pq.pop();
        int p_cost=p.first;
        int p_node=p.second;
        if(visited[p_node]) continue;
        visited[p_node]=true;
        for(pii c:adj[p_node]){
            int c_cost=c.first;
            int c_node=c.second;
            if(dist[c_node] > p_cost + c_cost){
                dist[c_node]=p_cost+c_cost;
                pq.push({dist[c_node],c_node});
            }
        }
    }
}
int main()
{   
    int n,m; cin>>n>>m;
    while(m--){
        int u,v,w; cin>>u>>v>>w;
        adj[u].push_back({w,v});
        adj[v].push_back({w,u});
    }
    for(int i=0;i<N;i++){
        dist[i]=INF;
    }
    dijkstra(1);
    for(int i=1;i<=n;i++){
        cout<<"Distance of "<<i<<": "<<dist[i]<<endl;
    }
    return 0;
}