// In this problem we have an array which tells about the coordinate of stalls nd cows(i/p) we have to find the min distance between the cows which is max ... (min dist btw cows)max ...  cows will go either any coordinate ... we have to return the minimum distance between the cows which is max
#include<bits/stdc++.h>
// Brute force has the time complexity is O(N * (maxi-mini)) and the space complexity is O(1).
using namespace std;
int minA(int d[], int n){
    int m=d[0];
    for(int i=0;i<n;i++){
        if(m>d[i]){
            m=d[i];
        }
    }
    return m;
}
int maxA(int c[],int n){
    int m=c[0];
    for(int i=0;i<n;i++){
        if(c[i]>m){
            m=c[i];
        }
    }
    return m;
}
bool placecow(int b[], int dis, int cows){
    // we have to iterate in the array
    int cnt=1,last=b[0];
    for(int i=1;i<6;i++){
        if((b[i]-last)>=dis) {
            cnt++;
            last=b[i];
        }
    }
    if(cnt>=cows) return true;
    else false;
}
int brute(int a[], int cows){
    cout<<"This answer is comes from Brute"<<endl;
    int mini=minA(a,6);
    int maxi=maxA(a,6);
    // we use this iteration to compute the  max distance between two adjacent cows
    for(int i=1;i<=(maxi-mini);i++){
        if(placecow(a,i,cows)==false) return (i-1);

    }
    return (maxi-mini);
}
int optimal(int e[], int cows){
    // Optimal code has the time complexity is O(N * (maxi-mini)) and the space complexity is O(1).
    cout<<"This answer comes from Optimal"<<endl;
    sort(e,e+6);
    int low=1,high=e[6-1]-e[0];
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(placecow(e,mid,cows)==false){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return high;

}
int main(){
    int n;
    cout<<"Enter the No. of Cows ";
    cin>>n;
    int arr[6]={0,3,4,7,10,9};
    int ans=brute(arr,n);
    cout<<"Answer is "<<ans<<endl;
    int an=optimal(arr,n);
    cout<<"Answer is "<<an<<endl;
    return 0;
}