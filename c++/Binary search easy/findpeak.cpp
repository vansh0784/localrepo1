// In this problem we have to return the peak element
// The definition of peak element is ... arr[i-1]<arr[i]>arr[i+1]
// We have the sorted array and .. to avoid edge cases we use the loop at 1 to n-2 where n is the size of the array
#include<bits/stdc++.h>
using namespace std;
void brute(int a[], int n){
    //  In this approach we use a for loop
    // we find only one peak
    cout<<"This answer comes from Brute"<<endl;
    for(int i=0;i<n;i++){
        if(i==0){
            if(a[i]>a[i+1]){
                cout<<a[i];
                break;
            }
        }
        else if(i==n-1){
            if(a[i-1]<a[i]){
                cout<<a[i];
                break;
            }
        }
        else{
            if(a[i-1]<a[i] && a[i]>a[i+1]){
                cout<<a[i];
                break;
            }
        }
    }
    cout<<endl;
}
int optimal(int b[], int n){
    // This code has the time complexity is of O(log n) and the space complexity is of O(1).
    // edge case ....
    if(n==1) return b[0];
    if(b[0]>b[1]) return b[0];
    if(b[n-1]>b[n-2]) return b[n-1];
    int low=1,high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(b[mid-1]<b[mid] && b[mid]>b[mid+1]){
            return b[mid];
        }
        else if(b[mid]>b[mid-1]){
            // we are on the left side of the array ..conc. we have to eliminate that part
            low=mid+1;
        }
        else{
            // we are on the right side of the array ... conc. we have to eliminate that part
            high=mid-1;
        }
    }
    return -1;

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
    int a=optimal(arr,n);
    cout<<"This answer comes from Optimal"<<endl;
    cout<<a;
}