#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int dup=n;
    int num=0;
    for(int i=1;n>0;n++){
        int rem=n%10;
        num=(rem*rem*rem)+num;
        n=n/10;
    }
    cout<<num;
    return 0;
}
