// In this problem we have to find the peak element .. {peak element is the element which is greater than the left and right element in the array/matrix} we have to do the same in 2D matrix.
#include<bits/stdc++.h>
using namespace std;
void brute(int a[4][6], int r, int c){
    // this code has the time complexity is O(r*c) and the space complexity is O(1).
    pair<int,int>ans;
    int maxi=-1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]>maxi){
                maxi=a[i][j];
                ans={i,j};
            }
        }
    }
    cout<<"This answer comes from Brute"<<endl;
    cout<<"{"<<ans.first<<","<<ans.second<<"}"<<endl;
}
int max1(int c[], int d){
    // this code has the time complexity is O(log(r)*c) and the space complexity is O(1).
    int idx=-1,maxi=-1;
    for(int i=0;i<d;i++){
        if(c[i]>maxi){
            maxi=c[i];
            idx=i;
        }
    }
    return idx;
}
void Optimal(int b[4][6],int r,int c){
    int clm;
    pair<int,int>ans;
    int low=0,high=r-1;
    while(low<=high){
        int mid=(low+high)/2;
        clm=max1(b[mid],c);
        int l1=mid-1>=0?b[mid-1][clm]:-1;
        int r1=mid+1<r?b[mid+1][clm]:-1;
        if(l1<b[mid][clm] && b[mid][clm]>r1){
            ans={mid,clm};
            break;
        }
        else if(l1>b[mid][clm]){
            high=mid-1;
        }
        else low=mid+1;

    }
    cout<<"This answer comes from Optimal"<<endl;
    cout<<"{"<<ans.first<<","<<ans.second<<"}"<<endl;
}
int main(){
    int arr[4][6];
    for(int i=0;i<4;i++){
        for(int j=0;j<6;j++){
            cin>>arr[i][j];
        }
    }
    brute(arr,4,6);
    Optimal(arr,4,6);
    return 0;
}