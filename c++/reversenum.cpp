#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int rev=0;
    for(int i=1;n>0;i++){
        int rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    cout<<"Reverse of a number is "<<rev;
    return 0;
}
