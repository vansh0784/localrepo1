// In this problem we have to return the square root of the entered number .. we have to return the answer in the round off value or floor value
// we use two methods to solve the problem first one has a linear time complexity and other one has lograthmic approach
#include<bits/stdc++.h>
using namespace std;
// this approach has the time complexity is O(N) and the space complexity is of O(1).
void brute(int n){
    int ans=0;
    for(int i=1;i<=n;i++){
        if((i*i)<=n){
            ans=i;
        }
        else{
            break;
        }
    }
    cout<<"This answer comes from the Brute"<<endl;
    cout<<"Answer is "<<ans<<endl;
}
// this code has the time complexity is O(log n) and the space complexity is O(1)
void optimal(int n){
    int ans=0;
    int low=1,high=n;
    while(low<=high){
        int mid=(low+high)/2;
        if((mid*mid)<=n){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<"This answer comes from the Optimal"<<endl;
    cout<<"Answer is "<<ans<<endl;
}
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    brute(n);
    optimal(n);
    return 0;
}