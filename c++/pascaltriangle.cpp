// this problem divides in the three sections
/*
1. In first section we find the any element by its row ad column value.
2. In Second section we generate the entire row.
3. In Third section we generate a whole pascal triangle pattern.
*/
// First Section
#include<bits/stdc++.h>
using namespace std;
void section1(int r, int c){
    int ans=1;
    for(int i=0;i<c;i++){
        ans=ans*(r-i);
        ans=ans/(i+1);
    }
    cout<<"The element at row "<<r+1<<" and column "<<c+1<<" is "<<ans<<endl;
}
// In Second section we have to return the
// this will be 1  5  10   10   5   1
int section2(int n){
    int res=1;
    cout<<res<<"  ";
    vector<int>row;
    for(int i=1;i<n;i++){
        res=res*(n-i);
        res=res/(i);
        row.push_back(res);

    }
    return row;
}
void section3(int n){
    vector<vector<int>>ans;
    for(int j=1;j<n;j++){
        ans.push_back(section2(j));
    }
    for(auto it:ans){
        cout<<it<<"  ";
    }

}
int main(){
    int r,c;
    cout<<"Enter the row and column";
    cin>>r>>c;
    int n;
    cout<<"Enter the num ";
    cin>>n;
    section1(r-1,c-1);
    section3(n);

}