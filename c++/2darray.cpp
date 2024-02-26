#include<iostream>
using namespace std;
int main(){
    // create 2d array
    int arr[3][4];
    cout<<"Taking the input"<<endl;
    // taking the input (element)
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"Printing the result"<<endl;
    // print
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
