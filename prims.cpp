#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
const int N=1e5+2;
vector<pii> adj[N];
bool visited[N];
class Edge
{
    public:
        int u,v,w;
    Edge(int u,int v,int w){
        this->u=u;
        this->v=v;
        this->w=w;
    }
};
class cmp{
    public:
    bool operator()(Edge a,Edge b){
        return a.w>b.w;
    }
};
void prims(int s){
    priority_queue<Edge,vector<Edge>,cmp> pq;
    pq.push({Edge(s,s,0)});
    vector<Edge> edgeList;
    while(!pq.empty()){
        Edge parent=pq.top();
        pq.pop();
        int u=parent.u,v=parent.v,w=parent.w;
        if(visited[v]) continue;
        visited[v]=true;
        edgeList.push_back(parent);
        for(auto child:adj[v]){
            if(!visited[child.first]){
                pq.push({Edge(v,child.first,child.second)});
            }
        }
    }
    for(Edge val:edgeList){
        cout<<val.u<<" "<<val.v<<" "<<val.w<<endl;
    }
}
int main()
{   
    int n,m; cin>>n>>m;
    while(m--){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    prims(1);
    return 0;
}