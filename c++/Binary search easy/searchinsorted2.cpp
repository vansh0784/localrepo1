// In this problem we have to do the search in the sorted array which has the duplicates elements so we have to find the targeted element if it is present so we return the index otherwise return -1.
#include<bits/stdc++.h>
using namespace std;
bool brute(int a[], int n, int k){
    // simply we do a linear search
    int ans=-1;
    for(int i=0;i<n;i++){
        if(a[i]==k){
            return true;
        }
    }
    return false;
}
bool optimal(int b[], int n, int k){
    //  In this part of the array we first identify the sorted part of the array
    // this code has the time complexity of O(log n) and the space complexity is of O(1).
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(b[mid]==k) return true;
        // if not then we use a condition which helps us to trim the array ... basically we compare the first element and mid and last element if it is same then we increment low by +1 nd decrement the high by -1
        if(b[low]==b[mid] && b[mid]==b[high]){
            low=low+1;
            high=high-1;
            // then we do a continue ... it returns the loop nd check the loop for next set of values
            continue;
        }
        // left
        if(b[low]<=b[mid]){
            if(b[low]<=k && k<=b[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        // right
        else{
            if(b[mid]<=k && k<=b[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

    }
    return false;
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
    // Brute part ... linear Search
    int ans1=brute(arr,n,k);
    cout<<"This answer comes from Brute"<<endl;
    if(!ans1){
        cout<<"No... target is not present"<<endl;
    }
    else{
        cout<<"Yes... target is present"<<endl;
    }
    // Optimal part ... Binary Search

    bool ans=optimal(arr,n,k);
    cout<<"This answer comes from Optimal"<<endl;
    if(ans==true){
        cout<<"Yes... target is present!"<<endl;
    }
    else{
        cout<<"No... target is not present!"<<endl;
    }
    return 0;
}