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
    cout<<"The element at row "<<r<<" and column "<<c<<" is "<<ans<<endl;
}
// In Second section we have to return the
// this will be 1  5  10   10   5   1
void section2(int n){
    cout<<"This is Second section of the code "<<endl;
    cout<<"This will be our "<<n<<" row "<<endl;
    int ans=1;
    for(int i=0;i<n;i++){
        ans=ans*(n-i);
        ans=ans/(n-i+1);
        cout<<ans<<"  ";
    }
    cout<<endl;
}
int main(){
    int r,c;
    cout<<"Enter the row and column";
    cin>>r>>c;
    int n;
    cout<<"Enter the row you wanna try to print ";
    cin>>n;
    section1(r-1,c-1);
    section2(n);
}