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
    cout<<"Answer is "<<idx<<endl;

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
}