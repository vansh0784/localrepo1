#include<iostream>
using namespace std;
//
int main(){
    int n;
    cout<<"size ";
    cin>>n;
    int arr[n];
    // initialising element.
    cout<<"INITIALISING ELEMENT "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"ACCESSING ELEMENTS "<<endl;
    //Accessing element.
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // modifying elements.
    cout<<"AFTER MODIFYING "<<endl;
    arr[5]=14;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}