#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter 3 Numbers:";
    cin>>x>>y>>z;
    if(x>y){
        if(x>z){
            cout<<"max is x";
        }
        else{
            cout<<"max is z";
        }
    }
    else{

        if(y>z){
            cout<<"max is y";
        }
        else{
            cout<<"max is z";
        }
    }

    return 0;
}