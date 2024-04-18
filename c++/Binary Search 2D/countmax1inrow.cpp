// In this problem we have to count the maximum number of 1 in a row and then return the row number .... we have an array of size n*m
#include<bits/stdc++.h>
using namespace std;
// This code has the time complexity is of O(n*m) and the space complexity is O(1)
void brute(int a[5][5], int n, int m){
    cout<<"This answer comes from Brute"<<endl;
    int idx=-1;
    int maxir=-1;
    for(int i=0;i<n;i++){
        int row=0;
        for(int j=0;j<m;j++){
            row+=a[i][j];
            if(row>maxir){
                maxir=row;
                idx=i;
            }

        }
    }
    cout<<"Answer is "<<idx<<endl;
}
void optimal(int b[5][5], int a, int c){
    // This code has the time complexity is O(N(logn)) and the space complexity is O(1).
    cout<<"This answer comes from Optimal"<<endl;
    int idx=-1;
    int maxir=-1;
    for(int i=0;i<a;i++){
        int row=0;
        int low=0,high=c-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(b[i][mid]==1 && b[i][mid-1]!=1){
                row=c-mid;
                if(row>maxir){
                    maxir=row;
                    idx=i;
                }

            }
            else if(b[i][mid-1]==1){
                high=mid-1;
            }
            else low=mid+1;
        }
    }
    cout<<"Answer is "<<idx<<endl;
}
int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    brute(arr,5,5);
    optimal(arr,5,5);
    return 0;
}