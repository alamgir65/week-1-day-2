#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cin.ignore();
        string s; cin>>s;
        bool flag=false;
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(s[i]=='U'){
                y++;
                if(x==1 && y==1){
                    flag=true;
                    break;
                }
            }
            else if(s[i]=='D'){
                y--;
                if(x==1 && y==1){
                    flag=true;
                    break;
                }
            }
            else if(s[i]=='R'){
                x++;
                if(x==1 && y==1){
                    flag=true;
                    break;
                }
            }
            else{
                x--;
                if(x==1 && y==1){
                    flag=true;
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}