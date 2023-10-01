#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        char a[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>a[i][j];
            }
        }
        string ans;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(a[i][j]!='.'){
                    ans+=a[i][j];
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}