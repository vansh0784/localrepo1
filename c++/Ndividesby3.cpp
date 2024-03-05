// In this problem we have to find the element which is present the n/3 times in the list
#include<bits/stdc++.h>
using namespace std;
void brute(int a[], int n){
    int calc;
    if(n/2==0){
         calc=n/3+1;
    }
    else{
        calc=n/3;
    }
    vector<int>ans;
    // In this case time complexity will be O(n2).
    // and space complexity will be O(1).
    for(int i=0;i<n;i++){
        if(ans.size()==0||ans[0]!=a[i]){
            int count=0;
            for(int j=0;j<n;j++){
                if(a[i]==a[j]){
                    count++;
                }
            }
            if(count>=calc){
                ans.push_back(a[i]);
            }

        }
    }
    for(auto it:ans){
        cout<<it<<",";
    }
}
void better(int b[], int n){
    int calc;
    if(n/2==0){
         calc=n/3+1;
    }
    else{
        calc=n/3;
    }
    // In this case time complexity will be O(N) but there will be some condition as we know that in order to return the answer unordered map will take O(1) at best and average case but in worst case it takes upto O(N){but it only happen very rarely or we can use ordered map which takes upto O(LogN)}.
    // In this case space complexity will be O(N).
    unordered_map<int,int>ans;
    vector<int>ls;
    for(int i=0;i<n;i++){
        ans[b[i]]++;
        if(ans[b[i]]==calc){
            ls.push_back(b[i]);
        }
    }
    cout<<endl;
    for(auto it:ls){
        cout<<it<<",";
    }
}
void optimal(int c[], int n){
    // here we use extended version of moore's voting algorithm
    // this code has all over the complexity of O(2N).
    // in order to return the answer we use the vector which has space complexity of O(1)
    int elm1=0,elm2=0;
    int cnt1=0,cnt2=0;
    vector<int>ret;
    // time complexity---O(N)
    for(int i=0;i<n;i++){
        if(cnt1==0&&elm2!=c[i]){
            elm1=c[i];
            cnt1++;
        }
        else if(cnt2==0&&elm1!=c[i]){
            elm2=c[i];
            cnt2++;
        }
        else if(c[i]==elm1) cnt1++;
        else if(c[i]==elm2) cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
    }
    cnt1=0;
    cnt2=0;
    // cout<<"Manually checked "<<endl;
    // cout<<" count1"<<cnt1<<"element"<<elm1<<endl;
    // cout<<" count2"<<cnt2<<"element"<<elm2<<endl;

    for(int i=0;i<n;i++){
        // time complexity is O(N).
        if(c[i]==elm1) cnt1++;
        if(c[i]==elm2) cnt2++;
    }
    int calc;
    if(n/2==0){
         calc=n/3+1;
    }
    else{
        calc=n/3;
    }
    if(calc<=cnt1){
        ret.push_back(elm1);
    }
    if(calc<=cnt2){
        ret.push_back(elm2);
    }
    cout<<endl;
    // Time complexity is O(1).
    for(auto it:ret){
        cout<<it<<",";
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