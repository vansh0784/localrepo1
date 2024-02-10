#include<iostream>
using namespace std;
int main(){
    int n=3;
    char ch='A';
    for(int i=0;i<=(n-1);i++){
        for(char m='A';m<=('A'+i);m++){
            cout<<m<<" ";

        }
        cout<<endl;

    }
}