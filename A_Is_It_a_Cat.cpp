#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cin.ignore();
        string s; cin>>s;
        stack<char> st;
        for(int i=0;i<n;i++){
            if(st.top()!='m' || st.top()!='M' && s[i]=='m' || s[i]=='M'){
                st.push(s[i]);
            }
            else if(st.top()!='e' || st.top()!='M' && s[i]=='m' || s[i]=='M'){
                
            }
        }
    }
    return 0;
}