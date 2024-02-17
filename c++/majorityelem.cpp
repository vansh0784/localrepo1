#include<bits/stdc++.h>
using namespace std;
void approach1(int a[], int n){
    // This approach takes time complexity of O(n2)
    cout<<"This is approach 1"<<endl;
    int calc=n/2;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(a[i]=a[j]){
                cnt++;
            }

        }
        if(cnt>calc) {
            cout<<a[i]<<endl;
            break;
       }
   }
}
int approach2(int b[], int n){
    // this approach has time complexity of O(N*logn).
    // and having space complexity of O(N) by using map data structure.
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[b[i]]++;
    }
    for(auto it:mpp){
        if(it.second>(n/2)){
            return it.first;
        }
    }
    return -1;
}
void approach3(int c[], int n){
    // here i am using moore's voting algorithm.
    // it has time complexty of O(N+N).
    int elm=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            elm=c[i];
        }
        else if(c[i]==elm) cnt++;
        else cnt--;
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(c[i]==elm) cnt1++;
    }
    if(cnt1 > n/2){
        cout<<elm;
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
    approach1(arr,n);
    int ans=approach2(arr,n);
    cout<<"By hashing answers will be "<<ans<<endl;
    cout<<"this approach is most important "<<endl;
    approach3(arr,n);
}