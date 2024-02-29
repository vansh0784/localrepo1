// this problem state that you have to count the existence of repeated element.
#include<bits/stdc++.h>
using namespace std;
// In brute force the time complexity is O(n2) and space complexity is O(maximum element of array)
void brute(int a[], int n){
    int maxi=*max_element(a , a + n);

    int hash[maxi+1]={0};
    for(int i=0;i<n;i++){
        int start=a[i];
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                hash[a[i]]++;
                break;
            }
        }
        cout<<a[i]<<"--->"<<hash[a[i]]<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the size ";
    cin>>n;
    int arr[n];
    // taking input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    brute(arr,n);
}