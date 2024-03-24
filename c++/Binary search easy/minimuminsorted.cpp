// In this problem we have to find the minimum or least element in the array ( but the array is rotated by k places)
#include<bits/stdc++.h>
using namespace std;
// in brute approach we do a simple linear search which help us to find the smallest element in the array
// the time complexity is of O(N) and the space complexity is O(1)
void brute(int a[], int n){
    int mini=a[0];
    // in this code we do a simple traversing in the array
    for(int i=1;i<n;i++){
        if(mini>a[i]){
            mini=a[i];
        }
    }
    cout<<"This answer comes from Brute"<<endl;
    cout<<"Minimum is "<<mini<<endl;
}
void optimal(int b[], int n){
    // the code has the time complexity is of O(log n) and the space complexity is of O(1).
    int low=0,high=n-1;
    int mini=-1;
    while(low<=high){
        int mid=(low+high)/2;
        // the left part of the array is sorted
        if(b[low]<=b[mid]){
            mini=min(mini,b[low]);
            low=mid+1;
        }
        // if right part of the array is sorted
        else{
            high=mid-1;
            mini=min(mini,b[mid]);
        }
    }
    cout<<"This answer comes from Optimal"<<endl;
    cout<<"Minimum is "<<mini<<endl;
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
    return 0;
}
