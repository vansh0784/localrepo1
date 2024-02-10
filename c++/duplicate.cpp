#include<iostream>
using namespace std;
void once(int a[], int s){
    int dup=0;
    for(int i=0;i<s;i++){
        dup=dup^a[i];
    }
    cout<<dup<<" appear once ";
}
int main(){
    int n;
    cout<<"Enter the size ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    once(arr,n);
}