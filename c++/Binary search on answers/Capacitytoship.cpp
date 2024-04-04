// In this problem we have a ship .. that carrys the items(items have their respective weights) and a day is given to ship all the items we have  to return the minimum weight we have to carry on the ship in order to day (given).
// ship only carry items once in a day
#include<bits/stdc++.h>
using namespace std;
// This code has the time complexity of O((sum-maxi+1)*N) and the space complexity is O(1).
int maxA(int a[], int n){
    int a1=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>a1){
            a1=a[i];
        }
    }
    return a1;
}
int sumA(int b[], int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+=b[i];
    }
    return s;
}
int compute(int c[], int size, int ct, int  d){
    int day=1,cap=0;
    for(int i=0;i<size;i++){
        if(cap+c[i]>ct){
            day=day+1;
            cap=c[i];
        }
        else{
            cap+=c[i];
        }
    }
    return day;

}
int brute(int w[], int size, int day){
    cout<<"This answer comes from Brute"<<endl;
    int maxi=maxA(w,size);
    int sum=sumA(w,size);
    for(int cap=maxi;cap<=sum;cap++){
        int reqd=compute(w,size,cap,day);
        if(reqd<=day) return cap;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the days ";
    cin>>n;
    int wt[10]={1,2,3,4,5,6,7,8,9,10};
    int ans=brute(wt,10,n);
    cout<<"Answer is "<<ans<<endl;
    return 0;
}