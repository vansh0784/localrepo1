// In this problem we have an array which consist of elements twice and a single element we have to find the element which is present unique in the duplicates
// 1 1 2 2 3 3 4 5 5 6 6 here n is 11
#include<bits/stdc++.h>
using namespace std;
void brute(int a[], int n){
    // In this approach we use a linear time complexity
    for(int i=1;i<n-1;i++){

        if(i-1==0){
            if(a[i-1]!=a[i]){
                cout<<"Answer is "<<a[i-1]<<endl;
                break;
            }
        }
        else if(i+1==n-1){
            if(a[i]!=a[n-1]){
                cout<<"Answer is "<<a[n-1]<<endl;
                break;
            }
        }
        else{
            if(a[i-1]!=a[i] && a[i]!=a[i+1]){
                cout<<"Answer is "<<a[i]<<endl;
                break;
            }
        }
    }
}
void optimal(int b[], int n){
    // In this approach we used the Binary Search
    // the time complexity is of O(log n) and the space complexity is O(1).
    // we trim down the search space to avoid the edge cases
    int low=1,high=n-2;
    int ans=-1;
    // if the array has single element then we return that element
    if(n==1){
            cout<<"Answer is "<<b[n]<<endl;
    }
    while(low<=high){
        int mid=(low+high)/2;
        if(b[mid]!=b[mid+1] && b[mid-1]!=b[mid]){
            cout<<"Answer is "<<b[mid]<<endl;
            break;
        }
        // if the mid is at odd index ... we look for left element if it is equal to mid then we are on left side of the array
        else if((mid%2==1)&& b[mid]==b[mid-1] || (mid%2==0) && b[mid]==b[mid+1]){
            low=mid+1;
        }
        // else we are on the right side of the array
        else{
            high=mid-1;
        }

    }
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