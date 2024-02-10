#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int count=0;
    for(int i=1;n>0;i++){
        n=n/10;
        count++;

    }
    //cout<<"Digits in numbers are:"<<count;
    return count;

}