#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no";
    cin>>n;
    int i=1;
    int count=0;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            count=count+i;
            j++;

        }
        cout<<endl;
        i++;
    }


}