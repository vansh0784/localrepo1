#include<iostream>
using namespace std;

int power1( int a , int b){
    int c=1;
    for( int i=1;i<=b;i++){
        c=c*a;
    }
    return c;
}
int main(){
    int x,y;
    cout<<"values of x and y:";
    cin>>x>>y;
    cout<<endl;
    int ans=power1(x,y);
    cout<< "answer is:"<< ans <<endl;
    return 0;
}
