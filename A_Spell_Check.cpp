#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        bool flag=true;
        cin.ignore();
        string s; cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]<97){
                if(s[i]!='T'){
                    flag=false;
                    break;
                }
            }
            else if(s[i]=='i' || s[i]=='m' || s[i]=='u' || s[i]=='r'){
                continue;
            }
            else{
                flag=false;
                break;
            }
        }
        if(n!=5){
            cout<<"NO"<<endl;
        }
        else{
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}