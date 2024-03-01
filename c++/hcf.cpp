#include<bits/stdc++.h>
using namespace std;
// it has time complexity is O(1) when the no. is not prime .. otherwise it will be O(n2).
// space complexity is O(1).
void optimal(int x, int y){
    int mini=min(x,y);
    for(int i=mini;i>0;i--){
        if((x%i==0)&&(y%i==0)){
            cout<<i<<endl;
            break;
        }
    }
}
// In this naive approach the time complexity is all around O(n).
// space complexity is O(1).
void brute(int x,int y){
    int count=0;
    int i=1;
    while(i<max(x,y)){
        if((x%i==0)&&(y%i==0)){
            count=i;
        }
        i++;
    }
    cout<<"the greatest divisor is "<<count;

}
// there will be an other approach known as Euclidean's Algotrithm in order to solve this problem

int main(){
    int x,y;
    cout<<"Enter two numbers. ";
    cin>>x>>y;
    optimal(x,y);
    brute(x,y);
    return 0;
}