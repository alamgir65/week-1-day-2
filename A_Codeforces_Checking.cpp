#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        string s="codeforces";
        char c; cin>>c;
        bool flag=false;
        for(int i=0;i<10;i++){
            if(s[i]==c) flag=true;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}