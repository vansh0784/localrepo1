#include<bits/stdc++.h>
using namespace std;
// this is the optimal approach of next permutation
int optimal(int a[], int n){
    //first i have  to find the index of the element which is lesser than other from the right
    int idx=-1;
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            idx=i;
            break;
        }
    }
    // if the lesser element is not find from the right to left and the value of index will be -1 so we just reverse the array .. as our answer
    if(idx==-1){
        reverse(a,a+n);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        return 0;
    }
    // if the value of index will be change from -1 to some positive value ... then we just find the no. who is just greater than our a[idx] and swap it with that number and then we reverse the array from index+1 to end in order to get the answer.
    for(int i=n-1;i>=idx;i--){
        if(a[idx]<a[i]){
        swap(a[idx],a[i]);
        break;
    }
    }
    reverse(a+idx+1,a+n);
    return 0;
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
    optimal(arr,n);
    cout<<endl;
    // here we are return our answer
    cout<<"Answer"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}