//In this problem we have to return the no. of possible pairs in which thr left element of the array is greater than twice of right element ---> a[left]>2*a[right]
// This problem is slightly same to the count inversion
#include<bits/stdc++.h>
using namespace std;
void brute(int a[],int n){
    // in this approach we use 2 loops
    // This code has the time complexity of O(N2) which is not good and the space complexity is O(1)
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>2*(a[j])){
                count++;

            }
        }
    }
    cout<<"This answer comes from Brute"<<endl;
    cout<<"The total no. of reverse pairs are formed are "<<count<<endl;
}
void merges(int d[], int low, int mid, int high){
    int left=low;
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
    for(int i=low;i<=high;i++){
        d[i]=temp[i-low];
    }

}
int countpairs(int e[], int low, int mid, int high){
    int right=mid+1,cnt=0;
    for(int i=low;i<=mid;i++){
        while(right<=high && e[i]>2*e[right]) right++;
        cnt+=(right -(mid+1));
    }
    return cnt;

}
int msort(int c[], int low, int high){
    int cnt=0;
    if(low>=high) return cnt;
    int mid=(low+high)/2;
    cnt+=msort(c,low,mid);
    cnt+=msort(c,mid+1,high);
    cnt+=countpairs(c,low,mid,high);
    merges(c,low,mid,high);
    return cnt;
}
void optimal(int b[],int n){
    // this code has the time complexity of O(N * log N) which is similar as merge sort but we use some space .. so the space complexity is O(N)
    int cnt=msort(b,0,n-1);
    cout<<"This answer comes from Optimal"<<endl;
    cout<<"The total no. of reverse pairs are formed are "<<cnt<<endl;
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