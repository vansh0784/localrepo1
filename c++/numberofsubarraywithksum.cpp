// Basically in this problem we have to find the possible number of subarrays having the sum of k
// subarrays are the contiguous part of the array
// SPACE COMPLEXITY IS O(1) IN BRUTE AND BETTER.
#include<bits/stdc++.h>
using namespace std;
void brute(int a[], int n, int Key){
    // this approach is having time complexity of O(n3).
    int count=0;
    cout<<"This result comes from Brute "<<endl;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+a[k];
            }
            if(sum==Key){
                count++;
            }
        }
    }
    cout<<"Number of subarray having sum K is "<<count<<endl;
}
void better(int b[], int n, int Key){
    // this approach is having the time complexity is O(n2).
    int count=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+b[j];
            if(sum==Key){
                count++;
            }

        }

    }
    cout<<"This result comes from better"<<endl;
    cout<<"Number of subarray having sum K is "<<count<<endl;
}
void optimal(int c[], int n, int key){
    // This code has time complexity of O(N).
    // and the space complexity is O(N) due to using a map data structure in order to solve the answer.
    map<int,int>mpp;
    int prefixsum=0;
    int count=0;
    mpp[0]=1;
    for(int i=0;i<n;i++){
        prefixsum=prefixsum+c[i];
        int remove=prefixsum-key;
        count=count+mpp[remove];
        mpp[prefixsum]+=1;
    }
    cout<<"This answer comes from Optimal"<<endl;
    cout<<"Number of subarray having sum K is "<<count<<endl;

}
int main(){
    int n,Key;
    cout<<"Enter the size ";
    cin>>n;
    int arr[n];
    cout<<"Enter the key ";
    cin>>Key;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    brute(arr,n,Key);
    better(arr,n,Key);
    optimal(arr,n,Key);
}