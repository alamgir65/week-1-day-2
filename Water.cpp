#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        int mx,mx2;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(a[i]>max){
                max=a[i];
                mx=i;
            }
        }
        a[mx]=INT_MIN;
        int max_1=INT_MIN;
        for(int i=0;i<n;i++){
            if(a[i]>max_1){
                max_1=a[i];
                mx2=i;
            }
        }
        if(mx<mx2){
            cout<<mx<<" "<<mx2<<endl;
        }
        else{
            cout<<mx2<<" "<<mx<<endl;
        }
    }
    return 0;
}