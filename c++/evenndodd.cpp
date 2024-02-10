#include<iostream>
using namespace std;
bool evenandodd(int a){
    if(a&1){ return 0;
    }
    else { return 1;
    }
}
int main(){
    int num;
    cout<<"Enter Number:"<<endl;
    cin>>num;
    if(evenandodd(num)){
        cout<<"Number is Even";
    }
    else{
        cout<<"Number is Odd";
    }
    return 0;
}