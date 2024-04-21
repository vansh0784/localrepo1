// In this problem we have to search for the target value in 2D array ... but the 2D matrix is sorted by row as well as column;
#include<bits/stdc++.h>
using namespace std;
pair<int,int>brute(int a[5][5], int r,int c ,int k){
    // simply we do traversing nd match with targeted value;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==k) return {i,j};
        }
    }
    return {-1,-1};
}
int bs(int c[],int d,int k){
    int low=0,high=d-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(c[mid]==k) return mid;
        else if(c[mid]>k) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
pair<int,int>better(int b[5][5],int r, int c, int k){
    // in this approach we do a binary search at each row
    for(int i=0;i<r;i++){
        if(b[i][0]<=k && b[i][c-1]>=k){
            int ans34=bs(b[i],c,k);
            if(b[i][ans34]==k) return{i,ans34};
        }

    }
    return{-1,-1};
}
pair<int,int>optimal(int e[5][5],int r, int c, int k){
    // In this approach we do a binary search
    int row=r-1,clm=0;
    while(row>=0 && clm<c){
        if(e[row][clm]==k) return {row,clm};
        else if(e[row][clm]>k) row--;
        else clm++;
    }
    return {-1,-1};
}
int main(){
    int n;
    cout<<"Enter the Target";
    cin>>n;
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"This approach comes from Brute"<<endl;

    pair<int,int> ans=brute(arr,5,5,n);
    cout<<"{"<<ans.first<<","<<ans.second<<"}"<<endl;
    cout<<"This approach comes from Better"<<endl;

    pair<int,int> ans2=better(arr,5,5,n);
    cout<<"{"<<ans2.first<<","<<ans2.second<<"}"<<endl;
    cout<<"This approach comes from Optimal"<<endl;

    pair<int,int> ans3=optimal(arr,5,5,n);
    cout<<"{"<<ans3.first<<","<<ans3.second<<"}"<<endl;
    return 0;
}