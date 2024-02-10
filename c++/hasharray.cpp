#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<" ";
    }
    int hash[n]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    // i have to take number here for solving

    cout<<"here is your search for query "<<endl;
    for(int i=1;i<=n;i++){
        cout<<hash[i]<<" ";
    }
}