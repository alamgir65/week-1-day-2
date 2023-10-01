#include<bits/stdc++.h>
using namespace std;
const int N=1e3+2;
int parent[N];
int parentSize[N];
class Edge{
    public:
        int a,b,w;
    Edge(int a,int b,int w){
        this->a=a;
        this->b=b;
        this->w=w;
    }
};
bool cmp(Edge m,Edge n){
    return m.w<n.w;
}
void setU(int n){
    for(int i=0;i<=n;i++){
        parent[i]=-1;
        parentSize[i]=1;
    }
}
int find(int x){
    while(parent[x]!=-1){
        x=parent[x];
    }
    return x;
}
void dsu(int a,int b){
    int leaderA=find(a);
    int leaderB=find(b);
    if(leaderA!=leaderB){
        if(parentSize[leaderA]>parentSize[leaderB]){
            parent[leaderB]=leaderA;
            parentSize[leaderA]+=parentSize[leaderB];
        }
        else{
            parent[leaderA]=leaderB;
            parentSize[leaderB]+=parentSize[leaderA];
        }
    }
}
int main()
{   
    int n,m;
    cin>>n>>m;
    setU(n);
    vector<Edge> v;
    vector<Edge> ans;
    while(m--){
        int a,b,w;
        cin>>a>>b>>w;
        v.push_back({Edge(a,b,w)});
    }
    sort(v.begin(),v.end(),cmp);
    for(Edge val:v){
        int a=val.a,b=val.b,w=val.w;
        int leaderA=find(a);
        int leaderB=find(b);
        if(leaderA==leaderB) continue;
        ans.push_back(val);
        dsu(a,b);
    }
    cout<<"Minimum spaning Tree"<<endl;
    for(Edge val:ans){
        cout<<val.a<<" "<<val.b<<" "<<val.w<<endl;
    }
    return 0;
}