#include<bits/stdc++.h>
using namespace std;
// this approach has time complexity of O(n2).
void approach1(int b[], int n, int target){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i+1;j<n;j++){
            // if(i==j) continue;
            if(b[i]+b[j]==target){
                cout<<b[i]<<"+"<<b[j]<<"="<<target<<endl;
            }
        }
    }
    cout<<"this soln comes from  approach 1"<<endl;

}
// This approach has time complexity of O(n).
// space complexity of O(n).
int approach2(int c[],int n, int target){
    map<int,int>ap;
    for(int i=0;i<n;i++){
        int x=ap[i];
        int more=target-x;
        if(ap.find(more)!=ap.end()){
            cout<<"YES"
        }
        ap[x]=i;
    }
    return 0;

}
// this approach has time complexity of O(n*nlogn).
// space complexity O(1).
void approach3(int c[], int n, int target){
    sort(c.begin(),c.end());
    int left=0,right=n-1;
    while(left<right){
        int sum=c[left]+c[right];
        if(sum==target){
            cout<<"Yes"<<endl;
        }
        else if(sum<target) left++;
        else right--;
    }
}
int main(){
    int n,target;
    cout<<"Enter the size ";
    cin>>n;
    cout<<"Enter the Target Value ";
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    approach1(arr,n,target);
    approach2(arr,n,target);
    approach3(arr,n,target);
}