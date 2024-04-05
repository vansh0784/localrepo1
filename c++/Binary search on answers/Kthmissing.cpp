#include<bits/stdc++.h>
using namespace std;
int maxA(int a[], int n){
    int maxi=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>maxi){
            maxi=a[i];
        }
    }
    return maxi;
}
void brute(int b[], int n, int k){
    // this code has the time complexity is of O(n2) and the space complexity is O(1).
    cout<<"This answer comes from Brute "<<endl;;
    int cnt=0;
    int ans=0;
    int maxi=maxA(b,n);
    for(int a=1;a<=maxi;a++){

        for(int j=0;j<n;j++){
            if(b[j]==a){
                break;
            }
            else if(b[j]>a){
                cnt++;
                break;
            }
        }
        if(cnt==k){
            ans=a;
            cout<<"Answer is "<<ans<<endl;
            break;
        }
    }

}
void better(int c[], int n, int k){
    // this code has the time complexity is O(N) and space complexity is O(1).
    for(int i=0;i<n;i++){
        if(c[i]<=k) k++;
        else break;
    }
    cout<<"This answer is comes from Better"<<endl;
    cout<<"Answer is "<<k<<endl;
}
void optimal(int d[], int n, int k){
    // this code has the time complexity is O(logn) and space complexity is O(1).
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        int miss=d[mid]-(mid+1);
        if(miss<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    int ans=high+k+1;
    cout<<"This answer is comes from Optimal"<<endl;
    cout<<"Answer is "<<ans<<endl;
}
int main(){
    int n;
    cout<<"Enter the size ";
    cin>>n;
    int k;
    cout<<"Kth Number ";
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    brute(arr,n,k);
    better(arr,n,k);
    optimal(arr,n,k);
    return 0;

}