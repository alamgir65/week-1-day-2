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
        for(int i=0;i<n;i++){
            int cnt=0;
            if(a[i]==0){
                while(a[i]==0){
                    cnt++;
                    mx=max(mx,cnt);
                    i++;
                }
            }
            else{
                cnt=0;
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}