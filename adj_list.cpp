#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
vector<int> adj[N];
int main()
{   
    int n,m; cin>>n>>m;
    while(m--){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        cout<<"List "<<i<<": ";
        for(int val:adj[i]){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}