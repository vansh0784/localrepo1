#include<bits/stdc++.h>
using namespace std;
int findmax(int b[], int n){
    int mx=b[0];
    for(int i=1;i<n;i++){
        if(mx<b[i]){
            mx=b[i];
        }
    }
    return mx;
}

void brute(int a[], int n){
    int k=findmax(a,4);
    cout<<"This answer comes form Brute"<<endl;
    for(int i=1;i<k;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=ceil((double)(a[i])/(double)(i));
        }
        if(sum<=n){
            cout<<"Answer is "<<i<<endl;
            break;
        }
    }
}
int sumbyd(int d[], int n){
    int sum=0;
    for(int i=0;i<4;i++){
        sum+=ceil((double)(d[i])/(double)(n));
    }
    return sum;

}
void optimal(int c[], int n){
    int ans;
    int low=1;
    int high=findmax(c,4);
    while(low<=high){
        int mid=(low+high)/2;
        if(sumbyd(c,mid)<=n){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<"This answer comes from Optimal"<<endl;
    cout<<"Answer is "<<ans<<endl;
}
int main(){
    int n;
    cout<<"Enter the threshold ";
    cin>>n;
    int arr[4]={8,4,2,3};
    brute(arr,n);
    optimal(arr,n);
    return 0;
}