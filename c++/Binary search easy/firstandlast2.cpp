// this is the optimal approach of first and last occurences
#include<bits/stdc++.h>
using namespace std;
// both the approaches has the time complexity is of O(2 * log n) and the space complexity is of O(1).
int first(int b[], int l, int h, int k){
    // in a simple binary search we find the targeted element
    int first=-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(b[mid]==k){
            first=mid;
            h=mid-1;

        }
        else if(b[mid]<k){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return first;

}
int last(int c[], int l, int h, int k){
    int last=0;
    while(l<=h){
        int mid=(l+h)/2;
        if(c[mid]==k){
            last=mid;
            l=mid+1;
        }
        else if(c[mid]<k){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return last;
}
void firstndlast(int a[], int low, int high, int k){
    // In this approach we do a binary search ... but we can't find both first and last by single search so we use do 2 searches for first and last
    int f=first(a,low,high,k);
    int l=last(a,low,high,k);
    cout<<"{"<<f<<","<<l<<"}"<<endl;
}
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int k;
    cout<<"Enter the target: ";
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    firstndlast(arr,0,n-1,k);

}