#include<bits/stdc++.h>
using namespace std;
const int N=1e3+2;
int parent[N];
//int parentSize[N];
int parentlevel[N];
void set_U(int n){
    for(int i=0;i<=n;i++){
        parent[i]=-1;
        parentlevel[i]=0;
    }
}
int find(int n){
    while(parent[n]!=-1){
        n=parent[n];
    }
    return n;
}
void dsu_Union(int a,int b){
    int leaderA=find(a);
    int leaderB=find(b);
    if(leaderA != leaderB){
        if(parentlevel[leaderA] > parentlevel[leaderB]){
            parent[leaderB]=leaderA;
        }
        else if(parentlevel[leaderB] > parentlevel[leaderA]){
            parent[leaderA]=leaderB;
        }
        else{
            parent[leaderB]=leaderA;
            parentlevel[leaderA]++;
        }
    }
}
int main()
{   
    int n,m;
    cin>>n>>m;
    set_U(n);
    while(m--){
        int a,b;
        cin>>a>>b;
        int leaderA =find(a);
        int leaderB=find(b);
        if(leaderA==leaderB){
            cout<<"Cycle Detected Between :"<<a<<" "<<b<<endl;
        }
        else{
            dsu_Union(a,b);
        }
    }
    return 0;
}