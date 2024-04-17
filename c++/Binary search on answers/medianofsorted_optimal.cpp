// In this problem we have to find the median of the sorted array ... OPTIMAL APPROACH
#include<bits/stdc++.h>
using namespace std;
float optimal(int a[], int s1, int b[], int s2){
    // this code has the time compleity is O(log (shorter array size "N")) and the space complexity is of O(1).
    int n=(s1+s2+1)/2,ans=-1;
    // start with shorter array
    int low=0,high=s1;
    while(low<=high){
        int mid=(low+high)/2;
        int rem=n-mid;
        int l1=INT16_MIN,l2=INT16_MIN;
        int r1=INT16_MAX,r2=INT16_MAX;
        if(mid<s1) r1=a[mid];
        if(rem<s2) r2=b[rem];
        if(mid-1>=0) l1=a[mid-1];
        if(rem-1>=0) l2=b[rem-1];
        if(l1<=r2 && l2<=r1){
            int a1=max(l1,l2);
            cout<<a1<<endl;
            int a2=min(r1,r2);
            cout<<a2<<endl;
            if((s1+s2)%2==1) return a1;
            else{
                ans=(a1+a2)/2.0;
                return ans;
            }
        }
        else if(l1>r2){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
}
int main(){
    int arr[4]={7,12,14,15};
    int brr[6]={1,2,3,4,9,11};
    float ans=optimal(arr,4,brr,6);
    cout<<"Answer is "<<ans<<endl;
    return 0;

}