#include<iostream>
using namespace std;
int uniqueelm(int a[],int n){
    int index=0;
    for(int j=1;j<n;j++){
        if(a[index]!=a[j]){
            a[index+1]=a[j];
            index++;
        }
    }
    int ans=index+1;
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int u = uniqueelm(arr,n);
    cout<<"unique elements are "<<u;
}