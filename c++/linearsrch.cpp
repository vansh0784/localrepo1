#include<iostream>
using namespace std;
bool linsearch(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(key==a[i]){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the size ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Element you have to find in the array ";
    cin>>key;
    bool found=linsearch(arr,n,key);
    if(found){
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
    return 0;
}