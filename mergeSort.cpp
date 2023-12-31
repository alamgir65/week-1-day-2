#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int mid,int r){
    int leftSize=mid-l+1,rightSize=r-mid;
    int L[leftSize],R[rightSize];
    int k=0;
    for(int i=l;i<=mid;i++){
        L[k]=a[i];
        k++;
    }
    k=0;
    for(int i=mid+1;i<=r;i++){
        R[k]=a[i];
        k++;
    }
    int i=0,j=0;
    k=l;
    while(i<leftSize && j<rightSize){
        if(L[i]<=R[j]){
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<leftSize){
        a[k]=L[i];
        i++;
        k++;
    }
    while(j < rightSize){
        a[k]=R[j];
        j++;
        k++;
    }
}
void mergeSort(int a[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}
int main()
{   
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}