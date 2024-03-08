// in this problem we have to return the triplet that gives the submission of 0
// there will be some constraints in this problem ... like the triplet we return are unique triplet .... in order for uniqueness we use a set data structure which store them in unique and sorted order.
#include<bits/stdc++.h>
using namespace std;
// brute force
void brute(int a[], int n){
    // this code has the time complexity of O(n3) which is not good so we have to optimise it .. and the space complexity is O(1) ... as we know that in order to return the answer we use a vector but it has only 3 elements which is constant space.
    vector<int>ans;
    cout<<"This answer comes from Brute"<<endl;
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
    cout<<endl;
}
void better(int b[], int n){
    cout<<"This answer comes from Better "<<endl;
    // This code has the time complexity of O(n2 * log m)
    // log m is for finding the element in the hash set.
    // and has the space complexity of O(N)-- for hashing purpose

    for(int i=0;i<n;i++){
        set<int>hashset;
        for(int j=i+1;j<n;j++){
            int calc=-(b[i]+b[j]);
            if(hashset.find(calc)!=hashset.end()){
                cout<<b[i]<<","<<b[j]<<","<<calc<<endl;
            }
            hashset.insert(b[j]);

        }
    }
}
void optimal(int c[], int n){
    // This code has the time complexity of O(N) because of using the two pointer approach
    // and has the space complexity of O(N) to store the triplets.
    set<vector<int>>ans;

    vector<int>temp;
    for(int i=0;i<n;i++){
        int j=i+1;
        int k=n-1;
        if(i>0 && c[i]==c[i-1]) continue;
        while(j<k){
            int sum=c[i]+c[j]+c[k];
            if(sum==0){
                vector<int>temp={c[i],c[j],c[k]};
                ans.insert(temp);
                j++;
                k--;

            }
            else if(sum>0){
                j++;
            }
            else{
                k--;
           }
        }

    }
    for( const auto &it:ans){
        cout<<it<<" ";
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
    better(arr,n);
    optimal(arr,n);
}