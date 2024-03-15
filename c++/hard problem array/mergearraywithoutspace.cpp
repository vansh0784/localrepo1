// In this problem we have to merge the array  without using the extra space
#include<bits/stdc++.h>
using namespace std;
void printres(int x[], int y[], int n, int m){
    for(int i=0;i<n;i++){
        cout<<x[i]<<" ";
    }
    for(int j=0;j<m;j++){
        cout<<y[j]<<" ";
    }
    cout<<endl;
}
void brute(int a[], int b[], int n, int m){
    // in this approach we have to take an vector and use a concept of merge sort and then transfer the vector elements in array 1 and array 2
    int crr[n+m];// resulted array
    int left=0;
    int right=0;
    int index=0;
    // this code has the time complexity is O(n+m) is for adding elements to the resulted array + O(n+m) for transfering elements to the array 1 and array 2
    // it has the space complexity of O(n+m) which is used for resulted array
    while(left<n && right<m){
        if(a[left]<=a[right]){
            crr[index]=a[left];
            left++,index++;
        }
        else{
            crr[index]=b[right];
            right++,index++;
        }
    }
    // this loop for in case any element is present in array 1 and array 2 so we just add up them on resulted array
    while(left<n){
        crr[index++]=a[left++];
    }
    while(right<m){
        crr[index++]=b[right++];
    }
    for(int i=0;i<n+m;i++){
        if(i<n){
            a[i]=crr[i];
        }
        else{
            b[i-n]=crr[i];
        }
    }
    cout<<"This answer comes from brute"<<endl;
    printres(a,b,n,m);
}
void optimal_1(int c[], int d[], int n, int m){
    // this code has the time complexity of  O(min(n,m)) + O(N logn) + O(M log n)
    // space complexity is of O(1)
    int start=n-1;
    int end=0;
    while(start>=0 && end<m){
        if(c[start]>d[end]){
            swap(c[start],d[end]);
            start--,end++;
        }
        else{
            break;
        }
    }
    sort(c,c+n);
    sort(d,d+m);
    cout<<"This result is from Optimal 1"<<endl;
    printres(c,d,n,m);
}
void optimal_2(int e[], int f[], int n, int m){
    // this approach uses the shell sort concept or GAP method
    int len=(m+n);
    int gap=(len/2)+(len%2);
    while(gap>0){
        int left=0;
        int right=gap;


    }
}
int main(){
    int n,m;
    cout<<"Enter the size of array 1"<<endl;
    cin>>n;
    cout<<"Enter the size of array 2"<<endl;
    cin>>m;
    int arr[n];
    int brr[m];
    cout<<"Enter array 1 "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter array 2 "<<endl;
    for(int j=0;j<m;j++){
        cin>>brr[j];
    }
    //brute(arr,brr,n,m);
    optimal_1(arr,brr,n,m);
    optimal_2(arr,brr,n,m);
}