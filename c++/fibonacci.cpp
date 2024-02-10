#include<iostream>
using namespace std;
//fibonacci series by recursive way
int  fib(int n){
    if(n<=1) return 1;
    else{
        int ans=fib(n-1)+fib(n-2);
    }
}
int main(){
    int n,n1=0,n2=1;;
    cout<<"Enter the size ";
    cin>>n;
    cout<<"0 1 ";
    // fibonacci series by for loop
    for(int i=0;i<n-2;i++){
        int n3=n2+n1;
        n1=n2;
        n2=n3;

        cout<<n3<<" ";

    }

}