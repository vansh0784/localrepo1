#include<bits/stdc++.h>
using namespace std;
void stock_nd_sell(int a[], int n){
    int mini=a[0];
    int profit=0;
    for(int i=1;i<n;i++){
        int cost=a[i]-mini;
        profit=max(cost,profit);
        mini=min(mini,a[i]);
    }
    cout<<"Here is the profit of "<<profit<<endl;
}
int main(){
    int n;
    cout<<"Enter the size ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // this is a function
    stock_nd_sell(arr,n);
}