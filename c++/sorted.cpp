#include<iostream>
using namespace std;
int sorted(int a[], int n){
    int res=0;
    for(int i=1;i<n;i++){
        if(1){
            if(a[res]<a[i]){
                res++;
            }
            else{
                cout<<"not";
                break;
            }
        }


    }    cout<<"sorted";
}
int main(){
    int n;
    cout<<"Enter elements of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sorted(arr,n);
}