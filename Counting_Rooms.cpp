#include<bits/stdc++.h>
using namespace std;
const int N=1e3+2;
int n,m;
vector<pair<int,int>> dir={{0,1},{0,-1},{1,0},{-1,0}};
char adj[N][N];
bool visited[N][N];
bool isValid(int i,int j){
    return (i>=0 && i<n && j>=0 && j<m);
}
void dfs(int si,int sj){
    visited[si][sj]=true;
    for(auto d:dir){
        int ni=d.first+si;
        int nj=d.second+sj;
        if(isValid(ni,nj) && !visited[ni][nj] && adj[ni][nj]=='.'){
            dfs(ni,nj);
        }
    }
}
int main()
{   
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>adj[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!visited[i][j] && adj[i][j]=='.'){
                cnt++;
                dfs(i,j);
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}