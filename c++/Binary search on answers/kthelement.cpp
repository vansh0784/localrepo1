// In this problem we have to find the Kth element of the two array after merging it
#include<bits/stdc++.h>
using namespace std;
// this code has the time complexity is O(log (size of shorter array)) and the space complexity is of O(1).
int optimal( int a[], int s1, int b[], int s2, int k){
    int low=0,high=s1;
    while(low<=high){
        int mid=(low+high)/2;
        int rem=k-mid;
        int l1=INT16_MIN,l2=INT16_MIN;
        int r1=INT16_MAX,r2=INT16_MAX;
        if(mid-1>=0) l1=a[mid-1];
        if(rem-1>=0) l2=b[rem-1];
        if(mid<s1) r1=a[mid];
        if(rem<s2) r2=b[rem];
        if(l1<=r2 && l2<=r1){
            return max(l1,l2);
        }
        else if(l1>r2) high=mid-1;
        else{
            low=mid+1;
        }

    }
}
int main(){
    int n;
    cout<<"Enter the Kth element ";
    cin>>n;
    int arr[4]={1,4,8,10};
    int brr[5]={2,3,6,7,9};
    int ans=optimal(arr,4,brr,6,n);
    cout<<"Answer is "<<ans<<endl;
    return 0;
}