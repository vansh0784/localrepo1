#include<iostream>
using namespace std;
void revarray(int a[], int n){
    for(int i=0;i<n/2;i++){
            int temp=a[i];
            a[i]=a[n-i-1];
            a[n-i-1]=temp;
        }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter elements of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    revarray(arr,n);
}