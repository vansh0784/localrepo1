#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no.:";
    cin>>n;
    while(n!=0){
        int rem=n%2;
        n=n/2;
        if(rem==0) return 1;
        else return 0;
    }
    return 0;
}