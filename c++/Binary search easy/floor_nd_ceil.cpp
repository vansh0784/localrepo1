// floor--- largest number in array/data which is arr[idx]<=target
// ceil--- smallest number in array/data which is arr[idx]>=target
// for ceil we use the concept of lower bound ... but for floor we have to do a slight change and then we get ans
#include<bits/stdc++.h>
using namespace std;
// both the floor and ceil is time complexity of O(log n) and the space complexity of O(1).
void floor(int a[], int low, int high, int k){
    int ans=-1;
    // floor
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]<=k){
            ans=a[mid];
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    cout<<"Floor is "<<ans<<endl;
}
void ceil(int b[], int low , int high , int k){
    // ceil --- same as lower bound
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(b[mid]>=k){
            ans=b[mid];
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<"Ceil is "<<ans<<endl;
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
    cout<<"This is optimal approach"<<endl;
    floor(arr,0,n-1,k);
    ceil(arr,0,n-1,k);
}