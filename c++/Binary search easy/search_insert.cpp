/* In this problem we have an array and a target value
 we have to return the index if the element is presented in the array if not then we have to return the index by maintaining sorted order to place that target value in the array */
 // this problem uses a lower bound concept .... means .. in lower bound we calculate the a[idx]>=target ... same in this question target will be given ..if target is matched with given array .. then return the index if not then .. give idex of its next one
#include<bits/stdc++.h>
using namespace std;
// both these approches using time complexity of O(log n)
// and a space complexity of O(1)
void optimal(int a[], int low, int high, int k){
    int ans=high+1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]>=k){
            ans=mid;
            high=mid-1; // left
        }
        else{
            low=mid+1;  // right
        }
    }
    cout<<"This approach uses Iterative Method"<<endl;
    cout<<"Answer--> "<<ans<<endl;
}
int optimal2(int b[], int low, int high , int k){
    int ans=high+1;
    if(low>high) return ans;
    int mid=(low+high)/2;
    if(b[mid]>=k){
        ans=mid;
        optimal2(b,low,mid-1,k);
    }
    else{
        optimal2(b,mid+1,high,k);
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
    optimal(arr,0,n-1,k);
    int ans=optimal2(arr,0,n-1,k);
    cout<<"This approach uses Recursive Method"<<endl;
    cout<<"Answer--> "<<ans<<endl;
}