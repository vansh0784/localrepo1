#include<iostream>
using namespace std;
void count(int a){
    cout<<"Counting Upto "<<a<<" is"<<endl;
    for(int i=1;i<=a;i++){
        cout<<i<<endl;

    }
}
int main(){
    int x;
    cout<<"Enter Number:";
    cin>>x;
    count(x);
    return 0;

}