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
        int b;
        int mx1=INT_MIN;
        int mx2=INT_MIN;
        for(int i=0;i<n;i++){
            if(a[i]>mx1){
                mx1=a[i];
                b=i;
            }
        }
        a[b]=INT_MIN;
        for(int i=0;i<n;i++){
            if(a[i]>mx2){
                mx2=a[i];
            }
        }
        a[b]=mx1;
        for(int i=0;i<n;i++){
            if(a[i]==mx1){
                cout<<mx1-mx2<<" ";
            }
            else{
                cout<<a[i]-mx1<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}