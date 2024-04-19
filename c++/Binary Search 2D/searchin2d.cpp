// In this problem we have to do a search in the 2D array
#include<bits/stdc++.h>
using namespace std;
// this code has the time complexity is O(r*c) near about O(N2) and the space complexity is O(1)
bool brute(int a[3][4], int r, int c, int k){
    cout<<"This answer comes from Brute"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==k){
                return true;
            }
        }
    }
    return false;
}
bool bs(int c[], int d, int k){
    int low=0,high=d-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(c[mid]==k){
            return true;
        }
        else if(c[mid]<k) low=mid+1;
        else high=mid-1;
    }
    return false;
}
// This code has the time complexity is O(R + log(m)) and the space complexity is O(1).
bool better(int b[3][4], int r, int c, int k){
    cout<<"This answer comes from Better"<<endl;
    for(int i=0;i<r;i++){
        if(b[i][0]<=k && k<=b[i][c-1]){
            return bs(b[i],c,k);
        }
    }
    return false;
}
// This code has the time complexity is O(log(n*m)) and the space complexity is O(1).
bool optimal(int d[3][4], int r, int c, int k){
    cout<<"This answer comes from Optimal"<<endl;
    int low=0,high=(r*c-1);
    while(low<=high){
        int mid=(low+high)/2;
        int r1=mid/4;
        int c1=mid%4;
        if(d[r1][c1]==k) return true;
        else if (d[r1][c1]<k) low=mid+1;
        else high=mid-1;
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the Key";
    cin>>n;
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    bool ans=brute(arr,3,4,n);
    bool ans1=better(arr,3,4,n);
    bool ans2=optimal(arr,3,4,n);

    if(ans==true) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
    if(ans1==true) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
    if(ans2==true) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
    return 0;
}