#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,2,4,5};
    int xor1=0,xor2=0;
    for(int i=0;i<n-1;i++){
        xor1=xor1^arr[i];
        xor2=xor2^(i+1);
        xor2=xor2^n;
    }
    xor2=xor2^n;
    int ans=xor1^xor2;
    cout<<"Answer is "<<ans;
}