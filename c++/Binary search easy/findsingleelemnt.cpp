// In this problem we have an array which consist of elements twice and a single element we have to find the element which is present unique in the duplicates
// 1 1 2 2 3 3 4 5 5 6 6 here n is 11
#include<bits/stdc++.h>
using namespace std;
void brute(int a[], int n){
    // In this approach we use a linear time complexity
    for(int i=1;i<n-1;i++){

        if(i-1==0){
            if(a[i-1]!=a[i]){
                cout<<"Answer is "<<a[i-1]<<endl;
                break;
            }
        }
        else if(i+1==n-1){
            if(a[i]!=a[n-1]){
                cout<<"Answer is "<<a[n-1]<<endl;
                break;
            }
        }
        else{
            if(a[i-1]!=a[i] && a[i]!=a[i+1]){
                cout<<"Answer is "<<a[i]<<endl;
                break;
            }
        }
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
    brute(arr,n);
}