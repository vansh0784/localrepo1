#include<bits/stdc++.h>
using namespace std;
int brute(int a[], int n1, int b[], int n2){
    int crr[n1+n2];
    int i=0,j=0,c=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]) crr[c++]=a[i++];
        else crr[c++]=b[j++];
    }
    while(i<n1){
        crr[c++]=a[i++];
    }
    while(j<n2){
        crr[c++]=b[j++];
    }
    int n=n1+n2;
    for(int k=0;k<n;k++){
        cout<<crr[k]<<" ";
    }
    cout<<endl;
    if(n%2==1) return crr[n/2]/2;
    else return (crr[(n/2)]+crr[((n/2)-1)])/2;
}
int main(){
    int arr[4]={2,3,6,15};
    int brr[6]={1,3,4,7,10,12};
    int ans=brute(arr,4,brr,6);
    cout<<"Answer is "<<ans<<endl;
    return 0;
}