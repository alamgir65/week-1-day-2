#include<bits/stdc++.h>
using namespace std;
const int N=1e3+2;
const int INF=1e9+7;
int dist[N][N];
int main()
{   
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j) dist[i][j]=0;
            else dist[i][j]=INF;
        }
    }
    while(m--){
        int u,v,w;
        cin>>u>>v>>w;
        dist[u][v]=w;
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}