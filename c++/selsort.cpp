#include<bits/stdc++.h>
using namespace std;
void selsort(int a[], int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i;j<n;j++){
            if(a[mini]>a[j]){
                mini=j;
            }
        }
        int temp=a[mini];
        a[mini]=a[i];
        a[i]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selsort(arr,n);
    return 0;
}