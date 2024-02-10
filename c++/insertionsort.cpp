#include<iostream>
using namespace std;
void insertion(int a[], int n){
    for(int i=1;i<n;i++){
        int idx=a[i];
        int j=i-1;
        for(j;j>=0;j--){
            if(a[j]>idx){
                a[j+1]=a[j];
            }
            else{
                break;
            }
        }
        a[j]=idx;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];}
    insertion(arr,n);
}