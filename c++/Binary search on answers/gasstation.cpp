// In this problem we have an array whose elements represent the coordinate of the gas station and we have to place the no of gas station "k" which is given by user in order of minimise max distance to gas station
#include<bits/stdc++.h>
using namespace std;
int brute(int a[], int size, int k){
    // first we have to place the station from 1 to k
    int place[size-1]={0};
    for(int i=1;i<=k;i++){
        // at second step we have to track the max distance btw coordinates and the place btw them
        long double maxv=-1;
        int maxi=-1;
        for(int j=0;j<size-1;j++){
            long double diff=(a[j+1]-a[j]);
            long double len=diff/(double)(place[j]+1);
            if(len>maxv){
                maxv=len;
                maxi=j;
            }

        }
        place[maxi]++;

    }
    long double ans=-1;
    for(int k=0;k<size-1;k++){
        long double diff=(a[k+1]-a[k]);
        long double len=diff/(double)(place[k]+1);
        ans=max(ans,len);
    }
    return ans;

}
int main(){
    int n;
    cout<<"Enter the no. of station ";
    cin>>n;
    int arr[7]={1,2,3,4,5,6,7};
    int ans=brute(arr,7,n);
    cout<<"Answer is "<<ans<<endl;
    return 0;
}