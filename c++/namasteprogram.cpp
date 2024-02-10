#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int i=2;
    while(i<x){
        if(x%i==0){
            cout<<"not a prime number"<<endl;
            break;
        }
        else{
            cout<<"it is a prime number";
            break;

        }
        i++;


    }
    return 0;
}
