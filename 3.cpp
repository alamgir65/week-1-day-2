#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int a,b; cin>>a>>b;
    int totalCoins;
    if(a>b){
        int op1=a+a-1;
        int op2=a+b;
        totalCoins=max(op1,op2);
    }
    else if(a==b){
        totalCoins=a+b;
    }
    else{
        int op1=b+b-1;
        int op2=b+a;
        totalCoins=max(op1,op2);
    }
    cout<<totalCoins<<endl;
    return 0;
}

