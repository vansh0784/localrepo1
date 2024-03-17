// UPPER BOUND ---> upper bound is same as the lower bound there will be a slight change in it .... arr[idx]>target
// this concept is useful for solving many problems
#include<bits/stdc++.h>
using namespace std;
void approach1(int a[], int low, int high, int k){
    cout<<"This approach uses Iterative Method"<<endl;
    int ans=high+1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]>k){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<"Answer--> "<<ans<<endl;
}
int approach2(int b[], int low, int high, int k){
    int ans=high+1;
    // base case
    if(low>high) return ans;
    int mid=(low+high)/2;
    if(b[mid]>k){
        ans=mid;
        approach2(b,low,mid-1,k);
    }
    else{
        approach2(b,mid+1,high,k);
    }
}
int main(){
    int n;
    cout<<"Enter the size ";
    cin>>n;
    int k;
    cout<<"Enter the target ";
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    approach1(arr,0,n-1,k);
    int ans=approach2(arr,0,n-1,k);
    cout<<"This approach uses Iterative Method"<<endl;
    cout<<"Answer--> "<<ans<<endl;


}
