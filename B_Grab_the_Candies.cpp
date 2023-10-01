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
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                even+=a[i];
            }
            else{
                odd+=a[i];
            }
        }
        if(even > odd){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}