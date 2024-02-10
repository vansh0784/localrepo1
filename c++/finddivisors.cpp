#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    vector<int> divis;
    int i=1;
    while(i*i<=n){

        if(n%i==0){
            divis.push_back(i);
            if(n/i!=i){
                divis.push_back(n/i);
            }
        }
        i++;
    }
    sort(divis.begin(),divis.end());
    for(auto it: divis){
        cout<< it<<" ";
    }
    return 0;
}