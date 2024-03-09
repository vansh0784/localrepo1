// in this problem we have to return the triplet that gives the submission of 0
// there will be some constraints in this problem ... like the triplet we return are unique triplet .... in order for uniqueness we use a set data structure which store them in unique and sorted order.
#include<bits/stdc++.h>
using namespace std;
// brute force
void brute(int a[], int n){
    // this code has the time complexity of O(n3) which is not good so we have to optimise it .. and the space complexity is O(1) ... as we know that in order to return the answer we use a vector but it has only 3 elements which is constant space.
    set<vector<int>>result;
    vector<vector<int>>ans;
    cout<<"This answer comes from Brute"<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;j<n;j++){
                if(a[i]+a[j]+a[k]==0){
                    vector<int>temp={a[i],a[j],a[k]};
                    sort(temp.begin(),temp.end());
                    result.insert(temp);

                }
            }
        }
    }
    for(auto value:result){
        ans.push_back(value);
    }
    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"]";
    }
}
void better(int b[], int n){
    cout<<"This answer comes from Better "<<endl;
    // This code has the time complexity of O(n2 * log m)
    // log m is for finding the element in the hash set.
    // and has the space complexity of O(N)-- for hashing purpose
    set<vector<int>>ans1;
    vector<vector<int>>res1;

    for(int i=0;i<n;i++){
        set<int>hashset;
        for(int j=i+1;j<n;j++){
            int calc=-(b[i]+b[j]);
            if(hashset.find(calc)!=hashset.end()){
                vector<int>temp={b[i],b[j],calc};
                sort(temp.begin(),temp.end());
                ans1.insert(temp);
            }
            hashset.insert(b[j]);


        }
    }
    for(auto it:ans1){
        res1.push_back(it);
    }
    for(int i=0;i<res1.size();i++){
        cout<<"[";
        for(int j=0;j<3;j++){
            cout<<res1[i][j]<<" ";
        }
        cout<<"]";
    }
}
void optimal(int c[], int n){
    // This code has the time complexity of O(N) because of using the two pointer approach
    // and has the space complexity of O(N) to store the triplets.
    set<vector<int>>ans;
    vector<vector<int>>answer;

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
    for(auto it:ans){
        answer.push_back(it);

    }
    cout<<"This answer comes from optimal"<<endl;
    for (int i = 0; i < answer.size(); i++)
    {
        cout << "[ ";
        for (int j = 0; j < 3; j++)
        {
            cout << answer[i][j] << " ";
        }
        cout << "] ";
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