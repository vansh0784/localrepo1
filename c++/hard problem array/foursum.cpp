// four sum we have to return the quadriplets that gives the submission of 0 ... constraints are the quadriplets we return are unique
#include<bits/stdc++.h>
using namespace std;
void brute(int a[],int n){
    cout<<"This answer comes from Brute"<<endl;
    // here we use four loops
    // ths brute force has the time complexity of O(n4) and the space complexity is O(2 * quadriplets)
    set<vector<int>>ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    long long sum=a[i]+a[j];
                    sum+=a[k];
                    sum+=a[l];
                    if(sum==0){
                        vector<int>temp={a[i],a[j],a[k],a[l]};
                        sort(temp.begin(),temp.end());
                        ans.insert(temp);

                    }
                }
            }
        }
    }
    vector<vector<int>>result(ans.begin(),ans.end());
    for(int i=0;i<result.size();i++){
        cout<<"[";
        for(int j=0;j<4;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
}
void better(int b[], int n){
    // in this approach we use the hashset and 3 loops
    // this approach has time complexity of O(n3) and the spaece complexity of O(2* quadriplets of answer)+O(N) for hashing
    cout<<"This answer comes from Better"<<endl;
    set<vector<int>>ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            set<int>hashset;
            for(int k=j+1;j<n;j++){
                long long sum=-(b[i]+b[j]+b[k]);
                if(hashset.find(sum)!=hashset.end()){
                    vector<int>temp={b[i],b[j],b[k],(int)sum};
                    sort(temp.begin(),temp.end());
                    ans.insert(temp);

                }
                hashset.insert(b[k]);
            }
        }
    }
    vector<vector<int>>result(ans.begin(),ans.end());
    for(int i=0;i<result.size();i++){
        cout<<"[";
        for(int j=0;j<4;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }
    cout<<"done"<<endl;
}
void optimal(int c[], int n){
    // here the passing array get in sorted manner
    cout<<"This answer comes from the Optimal"<<endl;
    // this code has the time complexity of O(n3) in order t solve the problem to optimise the space complexity ... hence the space complexity is O(no. of quadriplets).
    sort(c,c+n);
    set<vector<int>>ans;
    for(int i=0;i<n;i++){
        if(i>0 && c[i]==c[i-1]) continue;
        // this lines avoid the repeatition of element at 1 loop
        for(int j=i+1;j<n;j++){
            if(j>i+1 && c[j]==c[j+1]) continue;
            int k=j+1;
            int l=n-1;
            while(k>l){
                long sum=c[i]+c[j];
                sum+=c[k];
                sum+=c[l];
                if(sum==0){
                    vector<int>temp={c[i],c[j],c[k],c[l]};
                    ans.insert(temp);
                    k++;
                    l--;
                    // this loop for removing duplicacy
                    while(k<l && c[k]==c[k-1]) k++;
                    while(k<l && c[l]==c[l+1]) l--;

                }
                else if(sum<0) k++;
                else l--;
            }
        }
    }
    vector<vector<int>>result(ans.begin(),ans.end());
    for(int i=0;i<result.size();i++){
        cout<<"[";
        for(int j=0;j<4;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"]"<<endl;

    }
}
int main(){
    int n;
    cout<<"Enter the size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    brute(arr,n);
    better(arr,n);
    optimal(arr,n);
}