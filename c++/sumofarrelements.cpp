#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array. ";
    cin>>n;
    int init=1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"The sum of elements is "<<sum<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Done";

}