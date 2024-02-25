#include<bits/stdc++.h>
using namespace std;
// this function is used for the searching the element in array.
bool linear_Search(int b[], int x, int n){
    for(int i=0;i<n;i++){
        if(b[i]==x){
            return true;
        }
    }
    return false;
}
// the time complexity of the brute force is near about O(N2) and space complexity is O(1).
void brute(int a[], int n){
    int maxi=0;
    int cnt;
    for(int i=0;i<n;i++){
        int x=a[i];
        cnt=1;
        while(linear_Search(a,x+1,n)==true){
            cnt=cnt+1;
            x=x+1;
        }
        maxi=max(maxi,cnt);
    }
    cout<<"maximum consecutive sequence length is-->"<<maxi<<endl;
}
void better(int c[], int n){
    // this code has time complexity of O(NlogN) and space complexity is O(1).
    // this approach is not as good because we manipulate the array for our convenience which is not good.
    int lst_small=0;
    int maxi=0;
    int cnt=0;
    sort(c,c+n);
    for(int i=0;i<n;i++){
        if(c[i]-1==lst_small){
            cnt=cnt+1;
            lst_small=c[i];
        }
        else if(c[i]!=lst_small){
            cnt=1;
            lst_small=c[i];
        }
        maxi=max(cnt,maxi);
    }
    cout<<endl;
    cout<<"This answer is from better"<<endl;
    cout<<"longest consecutive sequence "<<maxi<<endl;

}
void optimal(int d[], int n){
    unordered_set<int>st;
    int maxi=0;
    for(int i=0;i<n;i++){
        st.insert(d[i]);
    }
    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int cnt=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                cnt=cnt+1;
                x=x+1;
            }
        }
        maxi=max(cnt,maxi);

    }
    cout<<""
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