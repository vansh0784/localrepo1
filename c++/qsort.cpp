#include<bits/stdc++.h>
using namespace std;
int partition(int array[],int s, int e){
    int pivot=array[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(array[i]<=pivot){
            count++;
        }

    }
    int pivotidx=count+s;
    swap(array[pivotidx],array[s]);
    int i=s,j=e;
    while(i<pivotidx && j>pivotidx){
        while(array[i]<=pivotidx){
            i++;
        }
        while(array[j]>pivotidx){
            j--;
        }
        if(i<pivotidx && j>pivotidx){
            swap(array[i++],array[j--]);
        }
    }
    return pivotidx;

}
void quicksort(int a[], int s, int e){
    if(s>=e) return;
    int p=partition(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);
}
int main(){
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    int i=0;
    int s=0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    quicksort(arr,s,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}