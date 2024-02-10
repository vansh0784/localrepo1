#include<iostream>
using namespace std;
int fact(int a){
    int value=1;
    for(int i=1;i<=a;i++){
        value=value*i;
    }
    return value;

}
int main(){
    int n,r;
    cout<<"Enter values of n and r:"<<endl;
    cin>>n>>r;
    int nCr=fact(n)/(fact(r)* fact(n-r));
    cout<<"Value of nCr is :"<< nCr<<endl;
    return 0;
}