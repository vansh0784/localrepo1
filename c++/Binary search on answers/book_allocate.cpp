// we have an array which consist the number of pages of a book ... and there will be the m students ...we have to allocate books to students ... there are some points we have to keep in our mind ... each student get atleast one book .. every book should be alloacted to only one student ...and the allocation of book is in contiguous manner ... basically we have to find the maximum number of pages allocate to student is minimum
#include<bits/stdc++.h>
using namespace std;
int maxA(int b[], int n){
    int ans=b[0];
    for(int i=0;i<n;i++){
        if(b[i]>ans){
            ans=b[i];
        }
    }
    return ans;
}
int sumA(int c[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=c[i];
    }
    return sum;
}
int compute(int d[], int p, int n){
    int cnt=1,sum=0;
    for(int i=0;i<n;i++){
        if((sum+d[i])<=p){
            sum+=d[i];
        }
        else{
            cnt++;
            sum=d[i];
        }

    }
    return cnt;
}
int brute(int a[], int n, int s){
    // this code has the time complexity is O(N*(sum-max)) and the space complexity is O(1).
    cout<<"This answer is comes from Brute"<<endl;
    if(s>n) return -1;
    int low=maxA(a,n);
    int high=sumA(a,n);
    for(int p=low;p<=high;p++){
        int cnt=compute(a,p,n);
        if(cnt==s) return p;
    }
    return -1;

}
int optimal(int e[], int n, int s){
    // this code has the time complexity is O(N*log(sum-max)) and the space complexity is O(1).
    cout<<"This answer is comes from Optimal"<<endl;
    int low=maxA(e,n);
    int high=sumA(e,n);
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(compute(e,mid,n)<=s){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the No. of student ";
    cin>>n;
    int arr[5]={25,46,28,49,24};
    int ans=brute(arr,5,n);
    cout<<"Answer is "<<ans<<endl;
    int ans1=optimal(arr,5,n);
    cout<<"Answer is "<<ans1<<endl;
    return 0;
}