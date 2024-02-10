#include<iostream>
using namespace std;
int main(){
    int n,mask=0;
    cout<<"enter no.:";
    cin>>n;
    if(n==0)
        return 1;
    while(n!=0){
        n=n>>1;
        mask=(mask<<1)|1;
    }
    int result=(~n);
    cout<<result;
    return 0;
}