#include<bits/stdc++.h>
using namespace std;
// this approach has time complexity of O(N).
void numsort( int a[], int n){
    int low=0,mid=0,high=n-1;
    for(mid;mid<n;mid++){
        if(a[mid]==0){
            swap(a[low],a[mid]);
            low++;
            mid++;
        }
        else if(a[mid]==1) mid++;
        else {
            swap(a[high],a[mid]);
            high--;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";;
    }
    numsort(arr,n);
    cout<<"After sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}