#include<bits/stdc++.h>
using namespace std;
// Brute force.
// the time complexity of given code is O(n2).
int longsubarray(int arr[], int n, int k){

    int maxlen=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            if(sum==k){
                maxlen=max(maxlen,j-i+1);
            }
        }
    }
    return maxlen;
}

int main(){
    int n,k;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter the k ";
    cin>>k;
    int array1[n];
    for(int i=0;i<n;i++){
        cin>>array1[i];
    }
    int ans=longsubarray(array1,n,k);
    cout<<ans<<endl;
}