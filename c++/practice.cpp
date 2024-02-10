#include<bits/stdc++.h>
using namespace std;
int Findpivot(int a[], int start, int end){
    int count=0;
    int pivot=a[start];
    for(int k=1;k<=end;k++){
        if(pivot>a[k]){
            count++;
        }
    }
    int pivotidx=start+count;
    swap(a[start],a[pivotidx]);
    int i=start,j=end;
    while((i<pivotidx)&&(j>pivotidx)){
        while(a[i]<=a[pivotidx]){
            i++;
        }
        while(a[j]>a[pivotidx]){
            j--;
        }
        if((i<pivotidx)&&(j>pivotidx)){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
void quicks(int arr[],int low, int high){
    if(low>=high) return;
    int p=Findpivot(arr,low,high);
    quicks(arr,low,p-1);
    quicks(arr,p+1,high);

}


void print(int k[],int n){
    for(int i=0;i<n;i++) cout<<k[i]<<" ";
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the size ";
    cin>>n;
    int array[n];
    int s=0;
    int e=n-1;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    quicks(array,s,e);
    cout<<"Here is a Quick Sort. "<<endl;
    print(array,n);


}