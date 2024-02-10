#include<iostream>
using namespace std;
//Merge the array.
void merge1(int a[], int low, int mid, int high){
    int temp[high+1];
    int i=low;
    int left=low;
    int right=mid+1;
    while((left<=mid) && (right<=high)){
        if(a[left]<=a[right]){
             temp[i]=a[left];
             left++;
             i++;
        }
        else{
             temp[i]=a[right];
             right++;
             i++;
        }
    }
    while(left<=mid){
        temp[i]=a[left];
        left++;
        i++;

    }
    while(right<=high){
        temp[i]=a[right];
        right++;
        i++;
    }
    for(int j=0;j<=high;j++){
        a[j]=temp[j];
    }
}
//Divide and merging algoritm.
void msort(int k[], int low, int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    msort(k,low,mid);
    msort(k,mid+1,high);
    merge1(k,low,mid,high);
}
int main(){
    int arr[4]={7,4,9,8};
    int n1=4;
    //Selection Sort Algorithm.
    cout<<"Here is Selection sort."<<endl;
    for(int i=0;i<n1-1;i++){
        int low=arr[i];
        for(int j=i+1;j<n1;j++){
            if(arr[j]<low) {
                low=j;
        }
        swap(arr[i],arr[low]);
    }
    }
    for(int i=0;i<n1;i++) cout<<arr[i]<<" ";
    cout<<endl;
    //Bubble Sort Algorithm.
    cout<<"Here is Bubble sort."<<endl;
    int n2=5;
    int brr[5]={5,3,2,4,1};
    for(int i=0;i<n2-1;i++){
        for(int j=0;j<n2-i-1;j++){
            if(brr[j]>brr[j+1]){
                swap(brr[j],brr[j+1]);
            }
        }
    }

    for(int i=0;i<n2;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    //Insertion Sort Algorithm.
    int n3=5;
    int crr[5]={20,40,10,50,30};
    for(int i=0;i<=n3-1;i++){
        for(int j=i;j>0;j--){
            if(crr[j-1]>crr[j]){
                swap(crr[j],crr[j-1]);
            }
        }
    }
    cout<<"Here is Insertion sort."<<endl;
    for(int i=0;i<n3;i++) cout<<crr[i]<<" ";
    cout<<endl;
    //Merge Sort Algorithm.
    int n4=6;
    int drr[n4]={6,5,4,3,2,1};
    int end=n4-1;
    int start=0;
    msort(drr,start,end);
    cout<<"Here is Merge sort."<<endl;
    for(int i=0;i<n4;i++) cout<<drr[i]<<" ";
    return 0;
}