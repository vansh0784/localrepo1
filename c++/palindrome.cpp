#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int k=n;
    int num=0;
    for(int i=1;n>0;i++){
        int rem=n%10;
        num=(num*10)+rem;
        n=n/10;


    }
    if(num==k) cout<<k<<" is palindrome";
    else cout<<k<<" is not a palindrome";
    return 0;
}