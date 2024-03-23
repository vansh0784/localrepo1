// In this problem we have to do the search in the sorted array which has the duplicates elements so we have to find the targeted element if it is present so we return the index otherwise return -1.
#include<bits/stdc++.h>
using namespace std;
void brute(int a[], int n, int k){
    // simply we do a linear search
    int ans=-1;
    for(int i=0;i<n;i++){
        if(a[i]==k){
            ans=i;
            break;
        }
    }
    cout<<"This answer comes from Brute"<<endl;
    cout<<"Answer--> "<<ans<<endl;

}
int optimal(int b[], int n, int k){
    //  In this part of the array we first identify the sorted part of the array
    int low=0,high=n-1,ans=-1;
    while(low<=high){

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
    brute(arr,n,k);
    optimal(arr,n,k);
}