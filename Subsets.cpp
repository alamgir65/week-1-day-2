#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n,d; cin>>n>>d;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        int kk=sum+d;
        int s=kk/2;
        int dp[n+1][s+1];
        dp[0][0]=1;
        for(int i=1;i<=s;i++){
            dp[0][i]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=s;j++){
                if(a[i-1]<=j){
                    int op1=dp[i-1][j-a[i-1]];
                    int op2=dp[i-1][j];
                    dp[i][j]=(op1+op2);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        if((kk % 2) != 0){
            cout<<0<<endl;
        }
        else{
            cout<<dp[n][s] % MOD<<endl;
        }
    }
    return 0;
}