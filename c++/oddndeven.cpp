#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter number:";
    cin>>x;
    // here i am using and operator
    //if & operator returns 1 --> odd
    //if & operator returns 0 --> even
    if(x&1){
        cout<< x <<" is odd";
    }
    else{
        cout<< x <<" is even";
    }
}