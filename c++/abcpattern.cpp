#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no.";
    cin>>n;
    int i=0;
    char ch='A';
    while(i<n){
        int j=0;
        while(j<n){

            cout<<ch<<" ";
            ch=ch+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}