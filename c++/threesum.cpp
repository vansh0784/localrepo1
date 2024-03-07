// in this problem we have to return the triplet that gives the submission of 0
// there will be some constraints in this problem ... like the triplet we return are unique triplet .... in order for uniqueness we use a set data structure which store them in unique and sorted order.
#include<bits/stdc++.h>
using namespace std;
// brute force
void brute(int a[], int n){
    // this code has the time complexity of O(n3) which is not good so we have to optimise it .. and the space complexity is O(1) ... as we know that in order to return the answer we use a vector but it has only 3 elements which is constant space.
    vector<int>ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;j<n;j++){
                if(a[i]+a[j]+a[k]==0){
                    ans.push_back(a[i]);
                    ans.push_back(a[j]);
                    ans.push_back(a[k]);

                }
            }
        }
    }
    for( auto it:ans){
        cout<<it<<", ";
    }
}
int main(){
    int n;
    cout<<"Enter the size ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    brute(arr,n);
}