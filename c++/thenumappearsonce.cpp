#include<bits/stdc++.h>
using namespace std;
void approach1(int a[],int n){
    //  This approach takes every element and do a linear search
    // Time complexity is O(N2)
    cout<<"Approach 1"<<endl;
    for(int i=0;i<n;i++){
        int let=a[i];
        int cnt=0;
        for(int j=0;j<n;j++){
            if(let==a[j]){
                cnt++;
            }
        }
        if(cnt==1)cout<<let<<" is appear once"<<endl;
    }
}
void approach2(int b[],int n){
    // This approach uses Xor operator to find the number which is appeared once.
    // Time complexity is O(N)
    cout<<"Approach 2"<<endl;
    int xor1=0;
    for(int i=0;i<n;i++){
        xor1=xor1^b[i];
    }
    cout<<xor1<<" is appear once"<<endl;
}
int main(){
    int n;
    cout<<"Enter the size ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    approach1(arr,n);
    approach2(arr,n);

}