#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cin.ignore();
        string s; cin>>s;
        int mx='a';
        for(int i=0;i<n;i++){
            if(s[i]>mx){
                mx=s[i];
            }
        }
        cout<<mx-'a'+1<<endl;
    }
    return 0;
}