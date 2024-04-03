// this is the optimal code of the make m Bouqet problem
#include<bits/stdc++.h>
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
bool possible(int b[], int day, int n, int m ){
    int cnt=0,nob=0;
    for(int i=0;i<8;i++){
        if(b[i]<=day){
            cnt++;
        }
        else{
            nob+=(cnt/n);
            cnt=0;
        }
    }
    nob+=(cnt/n);
    if(nob>=m) return true;
    else return false;

}
int optimal(int a[], int size, int n, int m){
    // this code has the time complexity is O(N * log(max-min+1))
    // and the space complexity is O(1).
    int low=minA(a,size);
    int high=maxA(a,size);
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(possible(a,mid,n,m)==true){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(ans==-1) return -1;
    else return ans;

}
int main(){
    int n;
    cout<<"Enter the No. of Bouqets ";
    cin>>n;
    int m;
    cout<<"Enter the adjacent flowers for bouqet ";
    cin>>m;
    int arr[8]={7,7,7,7,13,11,12,7};
    int ans=optimal(arr,8,n,m);
    cout<<"This answer comes from Optimal"<<endl;
    cout<<"Answer is "<<ans<<endl;
    return 0;
}