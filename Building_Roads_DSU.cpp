#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
int parentSize[N];
int parent[N];
void dsuSet(int n){
    for(int i=0;i<=n;i++){
        parent[i]=-1;
        parentSize[i]=1;
    }
}
int find(int n){
    while(parent[n]!=-1){
        n=parent[n];
    }
    return n;
}
void dsUnion(int a,int b){
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
    int n,m; cin>>n>>m;
    dsuSet(n);
    while(m--){
        int a,b;
        cin>>a>>b;
        dsUnion(a,b);
    }
    vector<int> v;
    for(int i=1;i<=n;i++){
        if(parent[i]==-1){
            v.push_back(i);
        }
    }
    cout<<v.size()-1<<endl;
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]<<" "<<v[i+1]<<endl;
    }
    return 0;
}