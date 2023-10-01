#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        int min=INT_MAX;
        int x;
        for(int i=0;i<n;i++){
            if(a[i]<min){
                min=a[i];
                x=i;
            }
        }
        a[x]=INT_MAX;
        int min2=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]<min2){
                min2=a[i];
            }
        }
        if(min <= 0 && min2 <= 0){
            sum=sum- 2*(min+min2);
        }
        cout<<sum<<endl;
    }
    return 0;
}