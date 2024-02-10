#include<iostream>
using namespace std;
void name(int x){
    cout<<"Vansh"<<endl;;
    if(x<=1){
        return;
    }
    name(x-1);
}
int main(){
    int a=5;
    name(a);
    return 0;
}