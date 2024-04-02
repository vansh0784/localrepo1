// In this problem , we have a koko(a person) who eats banana in pile (pile is an array and its elements are no. of banana) with in a deadline hrs , we have to calculate the minimum rate at which koko eats all banana with in a deadline
#include<bits/stdc++.h>
using namespace std;
int maxar(int b[], int n){
    int max1=b[0];
    for(int i=0;i<n;i++){
        if(b[i]>max1){
            max1=b[i];
        }
    }
    return max1;
}
int compute(int c[], int n, int hrs){
    int time=0;
    for(int i=0;i<n;i++){
        time+=ceil(c[i]/hrs);
    }
    return time;
}
void brute(int a[], int n, int h){
    cout<<"This answer comes from Brute"<<endl;
    // eating banana -- start 1 to maximum of the array
    int mx=maxar(a,n);
    for(int i=1;i<=mx;i++){
        int totaltime=compute(a,n,i);
        if(totaltime<=h){
            cout<<"Answer is "<<i<<endl;
            break;
        }
    }
}
void optimal(int d[], int n, int h){
    int low=1,high=maxar(d,n);
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(compute(d,n,mid)<=h){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<"This answer comes from Optimal"<<endl;
    cout<<"Answer is "<<ans<<endl;
}
int main(){
    int n;
    cout<<"Enter the deadline ";
    cin>>n;
    int arr[4]={3,6,7,11};
    brute(arr,4,n);
    optimal(arr,4,n);
    return 0;
}