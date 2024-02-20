#include<bits/stdc++.h>
using namespace std;
void bruteapproach(int a[],int n){
    // this approach has time complexity of O(n2).
    int maxi=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+a[j];
            maxi=max(maxi,sum);

        }

    }
    cout<<"maximum subarray sum is "<<maxi<<endl;
}
void optimal (int b[],int n){
    // this approach takes time complexity of O(n).
    int maxi=0;
    int sum=0;

    for(int i=0;i<n;i++){
        sum=sum+b[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }

    }
    cout<<"Maximum Subarray sum is by kadane's algo is "<<maxi<<endl;
}
int main(){
    int n;
    cout<<"Enter the size ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bruteapproach(arr,n);
    // by kadane's algorithm
    optimal(arr,n);
}