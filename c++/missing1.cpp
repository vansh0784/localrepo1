#include<bits/stdc++.h>
using namespace std;
//------------- Approach 1 ---> Having time complexity of O(n2)-----------
void approach1(int a[], int N){
    for(int i=1;i<=N;i++){
        int flag=0;
        for(int j=0;j<N-1;j++){
            if(a[j]==i){
                flag++;
                break;
            }
        }
        if(flag==0){
             cout<<"By using approach1 ---> "<<i<<endl;
             break;
        }
    }
}

/*------------ Approach 2 ---> Having time complexity O(n)--------------
there will be two methods of it :
1---> Using by computation n(n+1)/2 nd subtract the total sum of array
2---> Using by Xor operator */
void approach2(int b[], int N){
    // Using 1 method..... by some computation ...........
    int sum=0;
    for(int i=0;i<N-1;i++){
        sum=sum+b[i];
    }
    int calc=N*(N+1)/2;
    int result=calc-sum;
    cout<<"by using method 1 ---> "<<result<<endl;
    //Using 2 method.... By using Xor operator ..........
    int xor1=0;
    int xor2=0;
    for(int i=0;i<N-1;i++){
        xor1=xor1^b[i];
        xor2=xor2^(i+1);
    }
    xor2=xor2^N;
    int answer=xor2^xor1;
    cout<<"by using method 2 ---> "<<answer<<endl;


}

int main(){
    int arr[]={1,2,3,5};
    int N=5;
    approach1(arr,N);
    approach2(arr,N);
    return 0;
}