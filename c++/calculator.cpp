#include<iostream>
using namespace std;

int main(){
    int x , y;
    cout<<"Enter 2 values ";
    cin>>x>>y;
    cout<<"Enter operator ( + , - , / , * , % )";
    char operate;
    cin>>operate;
    switch(operate){
        case '+': cout<<"Addition will be "<<(x+y);
            break;
        case '-': cout<<"Substraction will be "<<(x-y);
            break;
        case '/': cout<<"Divison will be "<<(x/y);
            break;
        case '*': cout<<"Multiplication will be "<<(x*y);
            break;
        case '%': cout<<"Modulus will be "<<(x%y);
            break;
        default: cout<<"Invalid Operator";
    }
    return 0;
}