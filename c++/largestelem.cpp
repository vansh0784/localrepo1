#include<iostream>
using namespace std;
void largestarr(int a[],int n){
    int large=0;
    int secondlarge=INT16_MIN;
    cout<<secondlarge;
    for(int i=1;i<n;i++){
        if(a[large]<a[i]){
            secondlarge=large;
            large=i;
        }
        else if((a[i]<a[large])&&(a[i]>a[secondlarge])){
            secondlarge=i;
        }
    }
    cout<<a[large]<<endl;
    cout<<"Second large--> "<<a[secondlarge];
}
int main(){
    int n;
    cout<<"Enter the size ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    largestarr(arr,n);
}