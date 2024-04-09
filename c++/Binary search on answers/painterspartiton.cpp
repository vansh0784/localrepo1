// In this problem we have an array which consists of time duration of painting walls ... the size of array represents the no. of walls we have to paint nd we have the painters .. represents by the k .. we havee to calculate the min(max) basically we have to compute the minimum time span is used to paint maximum walls.
#include<bits/stdc++.h>
using namespace std;
int maxA(int b[], int n){
    int maxi=b[0];
    for(int i=0;i<n;i++){
        if(b[i]>maxi) maxi=b[i];
    }
    return maxi;
}
int sumA(int c[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=c[i];
    }
    return sum;
}
int compute(int d[], int a, int p){
    int m=1,sum=0;
    for(int i=0;i<4;i++){
        if(sum+d[i]<=a){
            sum+=d[i];
        }
        else{
            m++;
            sum=d[i];
        }
    }
    return m;
}
int brute(int a[], int s, int p){
    cout<<"This answer comes from Brute"<<endl;
    int s1=maxA(a,s);
    int s2=sumA(a,s);
    for(int i=s1;i<=s2;i++){
        int c=compute(a,i,p);
        if(c==p){
            return i;
        }
    }
    return -1;
}
int optimal(int e[], int s,int p){
    cout<<"This answer comes from Optimal"<<endl;
    if(p>s) return -1;
    int low=maxA(e,s);
    int high=sumA(e,s);
    while(low<=high){
        int mid=(low+high)/2;
        int c=compute(e,mid,p);
        if(c>p){
            low=mid+1;
        }
        else high=mid-1;
    }
    return low;
}
int main(){
    int n;
    cout<<"Enter No. of Painters"<<endl;
    cin>>n;
    int arr[4]={10,20,30,40};
    int ans=brute(arr,4,n);
    cout<<"Answer is "<<ans<<endl;
    int ans1=optimal(arr,4,n);
    cout<<"Answer is "<<ans1<<endl;
    return 0;

}