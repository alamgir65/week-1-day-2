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
        int cntR=0,cntB=0;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(a[i][j]=='R') cntR++;
                else if(a[i][j]=='B') cntB++;
            }
        }
        if(cntR > cntB) cout<<'R'<<endl;
        else cout<<'B'<<endl;
    }
    return 0;
}