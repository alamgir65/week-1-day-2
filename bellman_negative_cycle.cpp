#include<bits/stdc++.h>
using namespace std;
class Edge{
    public:
        int u,v,w;
    Edge(int u,int v,int w){
        this->u=u;
        this->v=v;
        this->w=w;
    }
};
int main()
{   
    int n,m;
    cin>>n>>m;
    vector<Edge> vec;
    while(m--){
        int u,v,w;
        cin>>u>>v>>w;
        Edge ed(u,v,w);
        vec.push_back(ed);
    }
    int dist[n+1];
    for(int i=1;i<=n;i++){
        dist[i]=INT_MAX;
    }
    dist[1]=0;
    for(int k=1;k<n;k++){
        for(auto ed:vec){
            int u=ed.u,v=ed.v,w=ed.w;
            if(dist[v] > dist[u]+w){
                dist[v]=dist[u]+w;
            }
        }
    }
    bool flag=false;
    for(int k=1;k<n;k++){
        for(auto ed:vec){
            int u=ed.u,v=ed.v,w=ed.w;
            if(dist[v] > dist[u]+w){
                dist[v]=dist[u]+w;
                flag=true;
            }
        }
    }
    for(auto ed:vec){
        int u=ed.u,v=ed.v,w=ed.w;
        if(dist[v]>dist[u]+w){
            dist[v]=dist[u]+w;
            flag=true;
            break;
        }
    }
    if(flag) cout<<"Cycle Detected"<<endl;
    else cout<<"No Cycle"<<endl;
    return 0;
}