#include<bits/stdc++.h>
using namespace std;
class Edge{
    public:
        int u;
        int v;
        int w;
    Edge(int u,int v,int w){
        this->u=u;
        this->v=v;
        this->w=w;
    }
};
int main()
{   
    int n,m; cin>>n>>m;
    vector<Edge> vec;
    while(m--){
        int u,v,w;
        cin>>u>>v>>w;
        Edge ed(u,v,w);
        vec.push_back(ed);
    }
    int dist[n+1];
    for(int i=0;i<=n;i++){
        dist[i]=INT_MAX;
    }
    dist[1]=0;
    for(int k=1;k<n;k++){
        for(auto ed:vec){
            int u=ed.u;
            int v=ed.v,w=ed.w;
            if(dist[v] > dist[u]+w){
                dist[v]=dist[u]+w;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<"Distance "<<i<<": "<<dist[i]<<endl;
    }
    return 0;
}