// In this problem we have a sorted array which is rotated by k places and a targeted element so we have to find the targeted element if it is not present then we have to return the -1 as answer
#include<bits/stdc++.h>
using namespace std;
// In brute we do a simple linear search which has the time complexity of O(N) and the space complexity is of O(1).
void brute(int a[], int n, int k){
    int ans=-1;
    for(int i=0;i<n;i++){
        if(a[i]==k){
            ans=i;
            break;
        }
    }
    cout<<"This answer is comes from Brute"<<endl;
    cout<<"Answer--> "<<ans<<endl;
}
//In this optimal approach we use binary search ... because we have a sorted array but due to rotation the array is get partitioned by some place so that it follows the sorted manner .... and then we do a binary search for left or right place of sorted array
int optimal(int b[], int n, int k){
    // this approach has the time complexity is of O(log n) and the space complexity is O(1)
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(b[mid]==k) return mid;
        // Due to the rotation of element this will disturbed the sorted manner
        // we look for which part of the array is sorted left or right
        // left part....
        if(b[low]<=b[mid]){
            if(b[low]<=k && k<=b[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        else{
            if(b[mid]<=k && k<=b[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size ";
    cin>>n;
    int k;
    cout<<"Enter the element for searching ";
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    brute(arr,n,k);
    int ans=optimal(arr,n,k);
    cout<<"This answer comes from Optimal"<<endl;
    cout<<"Answer--> "<<ans<<endl;
    return 0;
}