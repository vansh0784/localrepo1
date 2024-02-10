#include<iostream>
using namespace std;
void merging (int k[], int low, int mid, int high){
    int left=low;
    int i=low;
    int right=mid+1;
    int temp[high+1];
    while((left<=mid)&&(right<=high)){
        if(k[left]<=k[right]){
            temp[i]=k[left];
            left++;
            i++;
        }
        else{
            temp[i]=k[right];
            right++;
            i++;
        }
    }
    while(left<=mid){
        temp[i]=k[left];
        left++;
        i++;
    }
    while(right<=high){
        temp[i]=k[right];
        right++;
        i++;
    }
    for(int j=0;j<=high;j++){
        k[j]=temp[j];
    }
}
void merges(int a[], int start, int end){
    if(start>=end) return;
    int mid=(start+end)/2;
    merges(a,start,mid);
    merges(a,mid+1,end);
    merging(a,start,mid,end);
}
int main(){
    int n;
    cout<<"Enter the size of array .";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    merges(arr,low,high);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}