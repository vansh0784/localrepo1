#include<iostream>
using namespace std;
int ap(int a){
    int ap=(3*a)+7;
    return ap;
}
int main(){
    int n;
    cout<<"Enter nth term:";
    cin>>n;
    int ans=ap(n);
    cout<<"Answer Of "<<n<<"th term of AP is:"<<ans<<endl;
    return 0;
}