#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number--> ";
    cin>>n;
    int cnt=0;
    int x=n;
    int sum=0;
    for(int i=1;x>0;i++){
        x=x/10;
        cnt++;
    }
    int calc=pow(10,cnt-1);
    int y=n;
    for(int i=1;y>0;i++){

        int rem=y/calc;
        cout<<rem*rem;
        y=y%calc;
        calc=calc/10;

    }
    // desired output will be 525-->25425
    // desired output will be 342-->9164
    return 0;
}