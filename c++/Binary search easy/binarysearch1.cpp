// It is the first program of Binary search
// By iterative and recursive method
// binary search is always used when the given data is sorted order
// At first we have to find the target element by binary search
#include<bits/stdc++.h>
using namespace std;
// over all the time complexity of both approaches is O(log n)
// because we divide it further as per convenience and try to search in left and right part of the margin and eliminate the side on computing
void iterative_1(int a[], int n, int k){
    // for binary search we required two pointer we use through out the program
    int ans=0;
    int low=0;// left
    int high=n-1;//right
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==k){
            ans=mid;
            break;
        }
        else if(a[mid]<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<"This result is comes from Iterative approach"<<endl;
    if(ans){
        cout<<"The index of target element is "<<ans<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

}
int recursive_1(int b[], int low, int high, int k){
    // base case
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(b[mid]==k){
        return mid;
    }
    else if(b[mid]<k){
        return recursive_1(b,mid+1,high,k);
    }
    else{
        return recursive_1(b,low,mid-1,k);
    }
}
int main(){
    int n;
    cout<<"Enter the size";
    cin>>n;
    int target;
    cout<<"Enter the target";
    cin>>target;
    int arr[n];
    cout<<"Enter array elements(sorted)"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    iterative_1(arr,n,target);
    int ans=recursive_1(arr,0,n-1,target);// here we initialise low=0,high=n-1
    cout<<"This result comes from Recursive approach"<<endl;
    cout<<"The index of target element is "<<ans<<endl;

}