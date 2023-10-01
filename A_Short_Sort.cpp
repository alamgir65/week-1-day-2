#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        cin.ignore();
        if(s[0]=='a'){
            cout<<"YES"<<endl;
        }
        else if(s[1]=='b'){
            cout<<"YES"<<endl;
        }
        else if(s[2]=='c'){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}