// Here in this problem we have to compute the possible number of subarray having xor as K
// Subarray is the contiguous part of the array .
#include<bits/stdc++.h>
using namespace std;
void brute(int a[], int n, int k){
    // this code has the time complexity of O(n2) and have constant space complexity
    int maxi=0,count=0;
    // to generate all the possible subarray we need 2 loops
    for(int i=0;i<n;i++){
        int xor1=0;
        for(int j=i;j<n;j++){
            xor1=xor1^a[j];
            if(xor1==k){
                count++;

            }

        }
        maxi=max(maxi,count);

    }
    cout<<"This answer comes from brute"<<endl;
    cout<<"The maximum number of subarray having Xor as k is "<<maxi<<endl;
}
void optimal(int b[],int n,int k){
    // This code has the time complexity of O(n * logn) ans space complexity of O(N) due to using a hashmap ... as we know that in unordered map the time complexity is getting optimised but at worst case for basic operation it will take O(N) .. nd then all over the time complexity is O(N2) which is not good ... but worst case in the unordered map is once in a blue moon
    map<int,int>hashmap;
    int xr=0;
    int cnt=0;
    hashmap[xr]++;
    for(int i=0;i<n;i++){
        xr=xr^b[i];
        int x=xr^k;
        cnt=cnt+hashmap[x];
        hashmap[xr]++;

    }
    cout<<"This answer comes from optimal"<<endl;
    cout<<"The maximum number of subarray having Xor as k is "<<cnt<<endl;


}
int main(){
    int n;
    cout<<"Enter the size ";
    cin>>n;
    int K;
    cout<<"Enter the XOR as K ";
    cin>>K;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    brute(arr,n,K);
    optimal(arr,n,K);

}