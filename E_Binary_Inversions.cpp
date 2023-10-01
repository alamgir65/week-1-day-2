#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mx=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]==1 && a[j]==0){
                    mx++;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]==0){
                a[i]=1;
                break;
            }
        }
        int mx2=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]==1 && a[j]==0){
                    mx2++;
                }
            }
        }
        cout<<max(mx,mx2)<<endl;
    }
    return 0;
}