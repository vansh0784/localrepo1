// In this problem we have to return the answer if it is exists otherwise return -1
// In this problem we have the number M .. and other one is a number N which tells about for what times the root you have to compute
// for example: we have M=27 and N=3  so it means we have to find the cube root of it and retun the answer as 3.
#include<bits/stdc++.h>
using namespace std;
int brute(int n, int m){
    // we used an itertaive approach of time complexity O(M * logN) and the space complexity  is O(1).
    for(int i=1;i<=m;i++){
        int a=pow(i,n);
        if(a==m){
            return i;
        }
        else if(a>m){
            break;
        }

    }
    return -1;
}
int optimal(int n, int m){
    int low=1,high=m;
    while(low<=high){
        int mid=(low+high)/2;
        int a=pow(mid,n);
        if(a==m){
            return mid;
        }
        else if(a>m){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;

}
int main(){
    int n;
    cout<<"Enter the Number N ";
    cin>>n;
    int m;
    cout<<"Enter the Number M ";
    cin>>m;
    int ans=brute(n,m);
    if(ans==-1) cout<<"Answer is -1"<<endl;
    else cout<<"Answer is "<<ans<<endl;
    int a=optimal(n,m);
    if(a!=-1) cout<<"Answer is "<<ans<<endl;
    else{
        cout<<"Answer is -1"<<endl;
    }
    return 0;

}