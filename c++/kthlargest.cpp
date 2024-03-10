//In this problem we have to return the Kth largest element of the array.
#include<bits/stdc++.h>
using namespace std;
void brute(int a[], int n,int k){
    // first sort the array and then find the largest kth element by accessing that indexes;
    // aray does not have repetition of element
    sort(a,a+n);
    int res=a[k];
    cout<<k<<" th largest element of the array is "<<res<<endl;
    cout<<k<<" th smallest element of the array is "<<a[k-1];

}
int main(){
    int n,k;
    cout<<"Enter the size ";
    cin>>n;
    cout<<"Kth element ";
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    brute(arr,n,k);
}