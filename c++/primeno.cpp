#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int i=1;
    int count =0;
    while(i<=n){
        if(n%i==0){
            count++;
        }

        i++;
    }
    /*while(i<n){
        if(n%i==0){
            cout<<n<<" is not a prime number.";
         break;}
        else {cout<<n<<" is a prime number."<<endl;
         break;}
        i++;
    }*/
    if(count==2){
            cout<<"prime number.";
        }
    return 0;

}