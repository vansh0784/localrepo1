#include<iostream>
using namespace std;
// here the given function left rotate the array by one place.
void leftrotate(int a[], int n){
    int temp=a[0];
    for(int i=1;i<n;i++){
        a[i-1]=a[i];

    }
    a[n-1]=temp;
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
        cin>>arr[i];
    }
    leftrotate(arr,n);

}