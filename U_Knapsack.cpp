#include<bits/stdc++.h>
using namespace std;
const int N=1e3+2;
int dp[N][N];
int knapsack(int n,int s,int w[],int v[]){
    if(n==0||s==0) return 0;
    if(dp[n][s]!=-1) return dp[n][s];
    if(w[n-1]<=s){
        return dp[n][s]= max(knapsack(n-1,s-w[n-1],w,v)+v[n-1],knapsack(n-1,s,w,v));
    }
    else{
        return dp[n][s]= knapsack(n-1,s,w,v);
    }
}
int main()
{   
    int n,s; cin>>n>>s;
    int w[n],v[n];
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=s;j++){
            dp[i][j]=-1;
        }
    }
    cout<<knapsack(n,s,w,v)<<endl;
    return 0;
}