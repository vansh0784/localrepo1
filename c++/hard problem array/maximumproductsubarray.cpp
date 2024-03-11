// In this problem we have to return the maximum product of the subarray
#include<bits/stdc++.h>
using namespace std;
void brute(int a[], int n){
    // This code has the time complexity of O(N2) where as the space complexity is O(1).
    // generating all possible subarrays
    int maxi=0;
    for(int i=0;i<n;i++){
        int prod=1;
        for(int j=i;j<n;j++){
            prod=prod*a[j];
            maxi=max(prod,maxi);

        }
    }
    cout<<"This answer comes from Brute"<<endl;
    cout<<"The maximum product of the subarray is "<<maxi<<endl;
}
void optimal(int b[], int n){
    // the time complexity of this code is O(N) where as the space complexity is O(1)
    // It is the best approach of this problem there is some other approach we can use for computation is Kadane's Algorithm with some modification
    cout<<"This answer comes from Optimal"<<endl;
    int maxi=0;
    int pre=1,suf=1;
    // In this approach we have to do some observation
    //1. if all elements of the array is positive
    //2. if array has even no. of negative elements
    //3. if array has odd no. of negative elements
    //4. if array has 0 as a element than we have to find it nd again start the product as 1
    for(int i=0;i<n;i++){

        if(pre==0) pre=1;
        if(suf==0) suf=1;
        pre=pre*b[i];
        suf=suf*b[n-i-1];
        maxi=max(maxi,max(pre,suf));

    }
    cout<<"The maximum product of the subarray is "<<maxi<<endl;

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
    optimal(arr,n);
}