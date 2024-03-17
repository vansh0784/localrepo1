// LOWER BOUND ---> lower bound means we have to return the value of arr[idx]>=target
// this concept is useful for solving many problem
#include<bits/stdc++.h>
using namespace std;
// both the approaches has the time complexity of O(log n)
void approach1(int a[], int low, int high, int k){
    // this approach is of iterative approach
    int ans=high+1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]>=k){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<"This approach uses Iterative method "<<endl;
    cout<<"Answer---> "<<ans<<endl;
}
int approach2(int b[], int low, int high, int k){
    // this approach is of recursive method
    // base case
    int ans=high+1;
    if(low>high) return ans;

    int mid=(low+high)/2;
    if(b[mid]>=k){
        ans=k;
        approach2(b,low,mid-1,k);
    }
    else{
        approach2(b,mid+1,high,k);
    }

}
int main(){
    int n;
    cout<<"Enter the size";
    cin>>n;
    int k;
    cout<<"Enter the target ";
    cin>>k;

    int arr[n];
    cout<<"Array will be in sorted manner "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    approach1(arr,0,n-1,k);
    int ans=approach2(arr,0,n-1,k);
    cout<<"This approach uses Recursive method"<<endl;
    cout<<"Answer---> "<<ans<<endl;

}