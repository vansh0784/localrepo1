// In this problem we have a 2D array in which the elements are sorted in row wise
#include<bits/stdc++.h>
using namespace std;
void brute(int a[3][3],int r,int c){
    // This approach has the time complexity is O[(R*C)+(log(R*C))] and the space complexity is O(R*C).
    // took a flatend array of size r*c;
    int n=r*c;
    int flat[n];
    int idx=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            flat[idx]=a[i][j];
            idx++;
        }
    }
    // then sort the flatend array
    sort(flat,flat+n);
    int ans=flat[n/2];
    cout<<"This answer comes from Brute"<<endl;
    cout<<"Answer is "<<ans<<endl;


}
int main(){
    int arr[3][3]={{ 1,3,8},
                   { 2,3,4},
                   { 1,2,5}};
    brute(arr,3,3);
    return 0;

}