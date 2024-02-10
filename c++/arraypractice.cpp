#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=7;
    int arr[n]={1,1,2,2,2,3,3};
    //Ques--> Find Second largest and largest element of the array ----------------------------------------------------------------------
    // it takes 2N time complexity.
    int largest=arr[0];
    int slargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest) largest=i;

    }
    cout<<arr[largest]<<endl;
    for(int i=0;i<n;i++){
        if((arr[i]>slargest) && (arr[i]!=arr[largest])){
            slargest=arr[i];
        }
    }
    cout<<slargest;
    // Approach 2 ----------------------------------------------------------------------
    // it takes N time complexity.
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
    }
    cout<<slargest<<endl;
    // Ques--> Check if the array is sorted or not. ----------------------------------------------------------------------
    bool check=0;
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            check=1;
        }
        else{
            check=0;
        }

    }
    if(check==1) cout<<" Sorted"<<endl;
    else cout<<" Not Sorted"<<endl;
    // Ques-->Remove the duplicate and arrange them  in a unique way ----------------------------------------------------------------------
    int a=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[a]){
            arr[a+1]=arr[j];
            a++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}