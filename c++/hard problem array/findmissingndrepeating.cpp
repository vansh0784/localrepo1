// In this problem we have to find the repeating and missing number of the array ... The size of array is N nd the elements of array is from 1 to ..... N
#include<bits/stdc++.h>
using namespace std;
void brute(int a[], int n){
    //As we know that elements of the array is from 1 to n so we will find the repeating element;
    // this code has the time complexity is of O(n2).
    int miss=-1, rept=-1;
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(i==a[j]){
                cnt++;
            }

        }
        if(cnt==2) rept=i;
        else if(cnt==0) miss=i;
        if(rept != -1 && miss != -1)break;

    }
    cout<<"This answer comes from brute"<<endl;
    cout<<"{"<<rept<<","<<miss<<"}"<<endl;
}
void better(int b[], int n){
    // In this approach we have to use hashing
    // the time complexity of given code is O(2N) where as the space complexity is O(N)
    cout<<"This answer comes from better"<<endl;
    int hash[n+1]={0};
    int rept=-1,miss=-1;
    for(int i=0;i<n;i++){
        hash[b[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(hash[i]==2) rept=i;
        if(hash[i]==0) miss=i;

    }
    cout<<"{"<<rept<<","<<miss<<"}"<<endl;


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
    better(arr,n);

}