#include<bits/stdc++.h>
using namespace std;
// this is the brute force approach having the time complexity of O(n2).
void brute(int a[], int n){
    // space complexity is O(1) in order to return the answer we use a vector which has size of O(N)
    vector<int>ans;
    for(int i=0;i<n;i++){
        bool leader=true;
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                leader=false;
            }
        }
        if(leader==true){
            ans.push_back(a[i]);
        }
    }
    // we use an auto iterator to access all elements of vector and print them
    cout<<"this answer comes from brute force"<<endl;
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
}
// this has the time complexity of O(N) and space complexity is O(1) in order  to return the answer we use a vector data structure having space complexity of O(N)
void optimal(int b[], int n){
    int maxi=0;
    vector<int>a;
    cout<<" this answer comes from optimal approach"<<endl;
    for(int i=n-1;i>=0;i--){
        if(b[i]>maxi){
            a.push_back(b[i]);
        }
        maxi=max(maxi,b[i]);
    }
    for(auto it:a){
        cout<<it<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    brute(arr,n);
    optimal(arr,n);


}
