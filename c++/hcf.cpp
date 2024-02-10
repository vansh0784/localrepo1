#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter two numbers. ";
    cin>>x>>y;
    int count=0;
    int i=1;
    while(i<x){
        if((x%i==0)&&(y%i==0)){
            count=i;
        }
        i++;
    }
    cout<<"the greatest divisor is "<<count;
    return 0;
}