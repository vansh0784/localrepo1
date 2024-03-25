// In this problem we have to find the no. of places that the array is get rotated
#include<bits/stdc++.h>
using namespace std;
void brute(int a[], int n){
    // this code has the time complexity is of O(N).
    int ans=INT_MAX,idx=0;
    for(int i=0;i<n;i++){
        if(a[i]<ans){
            ans=a[i];
            idx=i;
        }
    }
    cout<<"This answer comes from Brute"<<endl;
    cout<<"Given array has rotated "<<idx<<" times"<<endl;

}
void optimal(int b[], int n){
    // given code has the time complexity is of O(log n) and the space complexity is of O(1).
    int low=0,high=n-1;
    int ans=INT_MAX,idx=-1;
    while(low<=high){
        int mid=(low+high)/2;
        // right side of the array is sorted
        if(b[low]<=b[mid]){
            if(b[low]<ans){
                ans=b[low];
                idx=low;
            }
            low=mid+1;
        }
        else {
            if(b[mid]<ans){
                ans=b[mid];
                idx=mid;
            }
            high=mid-1;
        }
    }
    cout<<"This answer comes from Optimal"<<endl;
    cout<<"Given array has rotated "<<idx<<" times"<<endl;
}
int main(){
    int n;
    cout<<"Enter the size ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    brute(arr,n);
    optimal(arr,n);
}