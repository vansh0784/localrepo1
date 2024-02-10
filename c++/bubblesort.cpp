#include<iostream>
using namespace std;
void bubblesort(int a[],int n){
    int swapp=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapp=1;
            }
        }
        if(swapp==0){
            break;
        }

    }

}
int main()
{   int n;
    cout<<"Enter size ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}