#include<iostream>
using namespace std;
int main(){
    /*for pattern printing try
    1. we have to use outer loop always for no. of rows.
    2. after the outer loop we have to use a inner loop for column and then we have to arrange them in a manner so that we could figure out condition in terms of outer loop so that pattern getting printed.
    3. always try to see a symmetry in pattern it help to solve the problem so that nd make them quite easy. */
    int n=5;
    for(int i=0;i<n;i++){
        // pattern
        for(int j=0;j<(n-i);j++){
            cout<<"*";
        }
        // space
        for(int j=1;j<=(n-i)*2;j++){
            cout<<" ";
        }
        // pattern
        for(int j=0;j<=(n-i);j++){
            cout<<"*";
        }

    cout<<endl;
    }
    return 0;

}