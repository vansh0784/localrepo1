#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size -- " ;
    cin>>size;
    // Taking input in the array

    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    // Time complexity of given code is O(n2)
    int count=0;
    int maxi=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            count++;
            maxi=max(maxi,count);
        }
        else{
            count=0;
        }
    }
    cout<<"Maximum Consecutive ones are --> "<<maxi<<endl;
}