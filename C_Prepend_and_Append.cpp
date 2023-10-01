#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cin.ignore();
        string s; cin>>s;
        int cnt=0;
        int i=0,j=n-1;
        while(!s.empty() && s[i]=='0' && s[j]=='1' || s[i]=='1' && s[j]=='0'){
            i++;
            j--;
            cnt+=2;
        }
        if(n-cnt < 0){
            cout<<0<<endl;
        }
        else{
            cout<<n-cnt<<endl;
        }
    }
    return 0;
}