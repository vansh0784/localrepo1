#include<iostream>
using namespace std;
void printnumber(int i, int x){

    if(i>=x){
        return;
    }
    i=i+1;

    printnumber(i,x);
    cout<<i<<endl;

}
int main(){
    int n;
    cin>>n;
    int a=0;
    printnumber(a,n);
    return 0;
}