// This is the optimal code of the Capacity to ship problem
#include<bits/stdc++.h>
using namespace std;
// the time complexity of this code is of O(N*log(sum-maxi+1)) and the space complexity is of O(1).
int maxA(int a[], int n){
    int a1=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>a1){
            a1=a[i];
        }
    }
    return a1;
}
int sumA(int b[], int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+=b[i];
    }
    return s;
}
int compute(int c[], int size, int ct, int  d){
    int day=1,cap=0;
    for(int i=0;i<size;i++){
        if(cap+c[i]>ct){
            day=day+1;
            cap=c[i];
        }
        else{
            cap+=c[i];
        }
    }
    return day;

}
int optimal(int a[], int size, int n){
    // Binary search
    cout<<"This answer comes from Optimal"<<endl;
    int ans=0;
    int low=maxA(a,size);
    int high=sumA(a,size);
    while(low<=high){
        int mid=(low+high)/2;
        int calc=compute(a,size,mid,n);
        if(calc<=n){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the days ";
    cin>>n;
    int wt[10]={1,2,3,4,5,6,7,8,9,10};
    int ans=optimal(wt,10,n);
    cout<<"Answer is "<<ans<<endl;
    return 0;
}