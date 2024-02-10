#include<iostream>
using namespace std;
int main()
{
    int pro=1;

    for(int i=2;i<500;i++){
        if(500%i==0){
            pro=pro*i;
              cout<<"The no.is "<<pro<<endl;
        }

    }

    return 0;
}