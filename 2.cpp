#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int a,b; cin>>a>>b;
    int total_element_in_range=(b-a)+1;
    if(a>=b){
        cout<<0<<endl;
    }
    else{
        cout<<total_element_in_range<<endl;
    }
    return 0;
}