// In this problem we have to return the first and last occurences of ... the element if it is present in the array if not then we have to return the -1 for both
#include<bits/stdc++.h>
using namespace std;
void brute(int a[], int n, int k){
    // In this approach we do the simple linear search
    // time complexity is of O(N) ans space complexity is O(1)
    int first=-1,last=-1;
    for(int i=0;i<n;i++){
        if(a[i]==k){
            if(first==-1){
                first=i;
            }
            else{
                last=i;
            }
        }
    }
    cout<<"This answer comes from Brute"<<endl;
    cout<<"{"<<first<<","<<last<<"}"<<endl;
}
int lowbound(int c[],int low, int high, int k){
    int ans=high+1;
    if(low>high)  return ans;    // base case
    int mid=(low+high)/2;
    if(c[mid]>=k){
        ans=mid;
        lowbound(c,low,mid-1,k);
    }
    else{
        lowbound(c,mid+1,high,k);
    }

}
int upbound(int d[], int low, int high, int k){
    int ans=high+1;
    if(low>high) return ans;
    int mid=(low+high)/2;
    if(d[mid]>k){
        ans=mid;
        upbound(d,low,mid-1,k);
    }
    else{
        upbound(d,mid+1,high,k);
    }
}
pair<int,int> firstndlast(int b[], int n, int k){
    // here we use the concept of lower bound and upper bound concept
    // first will be found by ... lower bound
    // last will be found by ... upper bound
    // This approach has the time complexity of O(2 * logn) and space complexity is of O(1).
    int lb=lowbound(b,0,n-1,k);
    // As we know that in the lower bound if the element is not present than it return the index of value N but in this case we want that it prints -1 not N
    if(lb==n || b[lb]!=k){
        // In this condition if lowerbound==n or arr[lowerbound]!=target it returns {-1,-1}
        return {-1,-1};
    }
    else{
        return{lb,upbound(b,0,n-1,k)-1};
    }


}
int main(){
    int n;
    cout<<"Enter the size ";
    cin>>n;
    int k;
    cout<<"Enter the target ";
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    brute(arr,n,k);
    pair<int,int>ans=firstndlast(arr,n,k);
    cout<<"This answer comes from Better"<<endl;
    cout<<"{"<<ans.first<<","<<ans.second<<"}"<<endl;
}