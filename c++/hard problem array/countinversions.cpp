// In this problem we have to count the pairs or array whose left element is greater than right element
#include<bits/stdc++.h>
using namespace std;
void brute(int a[],int n){
    // in this approach the time complexity is O(n2)
    // for this problem we use 2 loops
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                count++;
            }
        }
    }
    cout<<"This result comes from Brute"<<endl;
    cout<<"The no. inversion pairs are "<<count<<endl;
}
int merge(int d[],int low,int mid, int high){
    int left=low;
    int cnt=0;
    int right=mid+1;
    vector<int>temp;
    while(left<=mid && right<=high){
        if(d[left]<=d[right]){
            temp.push_back(d[left]);
            left++;

        }
        else{
            temp.push_back(d[right]);
            right++;
            cnt+=(mid-left+1);
        }
    }
    while(left<=mid){
        temp.push_back(d[left]);
        left++;

    }
    while(right<=high){
        temp.push_back(d[right]);
        right++;

    }
    for(int j=low;j<=high;j++){
        d[j]=temp[j-low];
    }
    return cnt;
}
int mergesort(int c[], int low, int high){

    int cnt=0;
    if(low>=high) return cnt;
    int mid=(low+high)/2;
    cnt+=mergesort(c,low,mid);
    cnt+=mergesort(c,mid+1,high);
    cnt+=merge(c,low,mid,high);
    return cnt;
}
void optimal(int b[],int n){
    // In this problem we use merge sort algorithm to find out the no. of pairs formed in the array
    // Basically ... we use merge sort in order to divide the array and then compare it .. array[left]>array[right] if it gets satisfied we count it as 1 nd so on to other element
    // This code has the time complexity is O(N logn) which is same as merge sort
    // space complexity is O(N) which is not as good nd in order to solve the problem we manipulate the given data which is not good....
    cout<<"This answer comes from Optimal"<<endl;
    int ans=mergesort(b,0,n-1);
    cout<<"The no. inversion pairs are "<<ans<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
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